#include<bits/stdc++.h>
/* Appraoch 1 : Brute Force using LS and Function
                TC -> O(sum-max) * O(n)

int CountStudent(vector<int>& arr, int pages)
{
   int students = 1;  // Initilaize for 1st student OR 1 student
   long long PageStudent = 0;
   for(int i=0;i<n;i++){
       if(arr[i] + PageStudent <= pages){ // Check if sum of arr[i] and pagestudent is less than pages
           PageStudent += arr[i]; // Sum it up
       }
       else{
           students += 1;    //If the above if fails since, sum exceeds the pages then go to next student
           pagesStudent += arr[i]; // And then sum it up from there
       }
   }
  return student; //Return the final count of student
}

int findPages(vector<int>& arr, int n, int m) {
    int low = *max_element(arr.begin(),arr.end());
    int high = accumlate(arr.begin(),arr.end(),0);
    for(int page = low; page <= high; page++){
        int cntstu = CountStudent(arr, page);
        if(cntstu == n) return page;
    }
    return -1;
}
*/

//-----------------------------------------------------------------------------------------

// Approach 2 : Optimized BS (TC -> O(log2(sum-max)) * O(n))

int CountStudent(vector<int>& arr, int pages)
{
   int students = 1;  // Initilaize for 1st student OR 1 student
   long long PageStudent = 0;
   for(int i=0;i<arr.size();i++){
       if(arr[i] + PageStudent <= pages){ // Check if sum of arr[i] and pagestudent is less than pages
           PageStudent += arr[i]; // Sum it up
       }
       else{
           students += 1;    //If the above if fails since, sum exceeds the pages then go to next student
           PageStudent = arr[i]; // And then sum it up from there
       }
   }
  return students; //Return the final count of student
}


int findPages(vector<int>& arr, int n, int m) {
    if( m > n) return -1;
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);

    while(low <= high){
        int mid = (low+high)/2;
        int cntstu = CountStudent(arr, mid);
        if(cntstu > m) 
        {
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}
