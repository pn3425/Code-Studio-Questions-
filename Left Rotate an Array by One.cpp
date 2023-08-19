#include <bits/stdc++.h> 
#include <vector>
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
   int temp[n];
   vector<int> ans;
   for(int i=1;i<n;i++)
   {
       ans.push_back(temp[i-1]=arr[i]);
   }

   ans.push_back(temp[n-1]=arr[0]);
  return ans;

}
