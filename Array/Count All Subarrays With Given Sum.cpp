int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here

    // Brute Force : O(N^3)     
    /*
        int cnt = 0;
        for( i=0 -> i=n){
          for( j=i -> j=n){
            for( m=i; m<j ;m++){  //Extra Loop to loop and sum the subarray
                int sum = 0; 
                sum = sum + arr[m];
            }
            if(sum == k) cnt++;
          }
        }
------------------------------------------------------------------------------
    // Better : O(N^2)

        int cnt = 0;
        for( i=0 -> i=n){
          for( j=i -> j=n){
                sum = sum + arr[j];   //Since only one one element is getting added
            }
            if(sum == k) cnt++;
          }
        }
  
--------------------------------------------------------------------------------
    */

    //Best -> Using Map, Linear Complexity 
    // Main Logic - Using PreFix Sum  

    map<int,int> mp;
    mp[0]=1;
    int preSum=0, count = 0;
    for(int i=0;i<arr.size();i++)
    {
        preSum += arr[i];
        int remove = preSum - k;
        count += mp[remove];
        mp[preSum] += 1;
    }
    return count;

}
