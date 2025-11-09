#include <bits/stdc++.h> 

//LoveBabbar Solution
/*
int firstocc(vector<int>& arr, int size , int key )
{
   int start = 0, end = size - 1, mid;
   mid = start + (end-start)/2;
   int ans = -1;
   while(start<=end)
   {
         if(arr[mid]==key)
         {
           ans = mid;          //Additional thing apart from binary search 
           end = mid -1 ;
         }

         else if( arr[mid]>key)
         {
            end = mid -1;

         }

         else if(arr[mid]<key)
         {
             start = mid + 1; 

         }
         mid = start + (end-start)/2;

   }
   return ans;

}

int lastocc(vector<int>& arr, int size , int key )
{
   int start = 0, end = size - 1, mid;
   mid = start + (end-start)/2;
   int ans = -1;
   while(start<=end)
   {
         if(arr[mid]==key)
         {
           ans = mid;          //Additional thing apart from binary search 
           start = mid +1  ;
         }

         else if( arr[mid]>key)
         {
            end = mid -1;

         }

         else if(arr[mid]<key)
         {
             start = mid + 1; 

         }
         mid = start + (end-start)/2;

   }
   return ans;

}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int, int> p;
    p.first = firstocc(arr,n,k);
    p.second = lastocc(arr, n, k);
    return p;
}*/

//---------------------------------------------------------------------------------------------------------------------
 // Using Upper & Lower Bound
 //TC -> O(log2 n) , SC -> O(1)

/*
int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low = 0, high = n - 1;
	int ans = n; // Hypo case, if even no element which is greater than x, return the size of array
	while(low <= high){
		int mid = (low + high)/2;
		if(arr[mid] >= x){
			ans = mid;
			high = mid - 1; // Go Left
		}
		else{
			low = mid + 1; // GO Right
		}
	} 
	return ans;
}

int upperBound(vector<int> &arr, int n, int x){
	// Write your code here.
	int low = 0;
	int ans = n;
	int high = n - 1;
	while( low <= high){
		int mid = (low + high) / 2;
		if(arr[mid] > x){
			ans = mid;
			high = mid - 1; // Go Left
		}
		else
		{
			low = mid + 1;
		}
	}
	return ans;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int lb = lowerBound(arr, n, k);
    if(lb == n || arr[lb] != k) return {-1,-1};  //Edge Case Handlingd
    return {lb, upperBound(arr, n, k) - 1 };

}*/


//-----------------------------------------------------------------------------------------

// Using RAW Binary Search , TC -> O(log2 n)

int firstOcurrence(vector<int>& arr, int n, int k){
    int low = 0, high = n-1;
    int first = -1;
    while(low <= high){
    int mid = (low+high)/2;
    if(arr[mid] == k){
        first = mid;
        high = mid - 1;  //Eliminating RIGHT SPACE
    }
    else if(arr[mid] < k) low = mid + 1; 
    else high = mid - 1;
    }
    return first;
}

int lastOcurrence(vector<int>& arr, int n, int k){
    int low = 0, high = n-1;
    int last = -1;
    while(low <= high){
    int mid = (low+high)/2;
    if(arr[mid] == k){
        last = mid;
        low = mid + 1;  //Eliminating LEFT SPACE
    }
    else if(arr[mid] < k) low = mid + 1; 
    else high = mid - 1;
    }
    return last;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
   int first = firstOcurrence(arr, n, k);
   if(first == -1) return {-1,-1};
   int last = lastOcurrence(arr, n, k);
   return{first, last};
   //if(last == -1) return {-1,-1};

}
