vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    //Rotate array by LEFT 
    int d = k%arr.size();
    reverse(arr.begin(),arr.begin()+d);  //Complete Reverse
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
     return arr;
//      int n=arr.size();
//      int temp[n];
//      vector<int> ans;
//      int cnt=0;
//      while(cnt<k)
//      {
//      for(int i=1;i<arr.size();i++)
//      {
//            ans.push_back(temp[i-1]=arr[i]);
//      }
//        ans.push_back(temp[n-1]=arr[0]);
//        cnt++;
//     }
  
//   return ans;
}
