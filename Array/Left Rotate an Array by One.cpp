// Example:
// Input: 'a' = 5, 'arr' = [1, 2, 3, 4, 5]

// Output: [2, 3, 4, 5, 1]

// arr[0] goes to the end, and rest of the remaining element shifts to the left from its original position

#include <bits/stdc++.h> 
#include <vector>
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
  /* Earlier Code
   int temp[n];
   vector<int> ans;
   for(int i=1;i<n;i++)
   {
       ans.push_back(temp[i-1]=arr[i]);
   }

   ans.push_back(temp[n-1]=arr[0]);
  return ans;
  */

  // Striver SDE Sheet
  vector<int> ans;
  int temp = arr[0];
  for(int i=1;i<n;i++)
  {
      ans.push_back(arr[i-1]=arr[i]);
  }
  ans.push_back(arr[n-1]=temp);
  return ans;
}
