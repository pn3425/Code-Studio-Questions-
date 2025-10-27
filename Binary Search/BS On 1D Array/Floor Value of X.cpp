#include <bits/stdc++.h> 

int floorSearch(vector<int> & arr, int X, int N)
{
    // Write your code here.
    int low = 0;
    int high = N-1;
    int ans = -1;
    while(low <= high){
        int mid = (low+high) / 2;
        if(arr[mid] <= X)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
