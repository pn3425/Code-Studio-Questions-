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

int count(vector<int>& arr, int n, int x) {
    pair<int,int> ans = firstAndLastPosition(arr, n, x);
	if(ans.first == -1) return 0;
	return ans.second - ans.first + 1;

}
