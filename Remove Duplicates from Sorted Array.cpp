int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
//Approach 1(TW0 POINTER)
   int i=0;
   for(int j=1;j<n;j++)
   {
     if(arr[j] != arr[i])
     {
           arr[i+1]=arr[j];
           i++;
     }

   }
  return i+1;

//Approach 2(USING SETS)
	 // set<int>st;
  // for(int i=0;i<n;i++)
  // {
  //   st.insert(arr[i]);
  // }

  // int k=st.size();

  // int j = 0;
  // for (int x: st) {
  //   arr[j++] = x;
  // }
  // return k;

}
