int isSorted(int n, vector<int> a) {
    // Write your code here.
   vector<int>d=a;
   sort(d.begin(),d.end());
   if(d==a)
   {
       return 1;
   }
 return 0;
}

