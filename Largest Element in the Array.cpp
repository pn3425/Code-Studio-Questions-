#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
//Approach 1
  int max = arr[0];
  for(int i=0;i<n;i++)
  {  
    if(arr[i]>max)
    max=arr[i];
  }
  return max;
}
