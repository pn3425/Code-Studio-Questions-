//STRIVER APPROACHES
//App1 - Brute Force (Left Rotate) TC->O(n), SC-> O(d) Temp Array space

/*
 vector<int> rotateArray(vector<int>arr, int k) {
   int n = arr.size();
   k = k%n; 
  vector<int> temp;

  //Put the first k elements from main array to temp array
  //Example Array -> {1,2,3,4,5}
  //Here k=k%n -> k=3
   for(int i=0;i<k;i++)
   {
       temp.push_back(arr[i]);
   }

   //Shifting
   for(int i=k;i<n;i++)
   {
       arr[i-k]=arr[i]; 
   }

   //Now using temp, put those remaining element in correct position in arr[]
   for(int i=n-k;i<n;i++)
   {
       arr[i]=temp[i-(n-k)];
   }
  return arr;
}  */
