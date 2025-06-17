int longestSubarrayWithSumK(vector<int> a, long long k) {
    
  //Approach 1 : Brute Force (TC -> O(N^3), SC -> O(n))
  // Create sub arrays and check for the sum

  /*
  int len=0;
  for(int i=0;i<a.size();i++)
  {
    for(int j=i;j<a.size();j++)
    {
      int sum=0;
      for(int m=i;m<=j;m++)   //Iterate from i->j and then get the sum
      {
        sum = sum + a[m];
      }
       if(sum == k) len=max(len,j-i+1);  
    }
  }
  return len;*/

  //Approach 1.1 -> O(N^2)

    /*
  int len=0;
  for(int i=0;i<a.size();i++)
  {
    int sum=0;
    for(int j=i;j<a.size();j++)
    {
     sum = sum + a[j];
     if(sum == k) len=max(len,j-i+1);  
    }
  }
  return len;*/

  //Approach 2 : Prefix Sum (If sum is k, then we check for x-k) (Did not understand)
  // This approach is correct for positives and negatives 

/*
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxlen = 0;
    for(int i = 0; i < arr.size(); i++) {
        sum = sum + arr[i];

        if(sum == k) {
            maxlen = max(maxlen, i + 1);
        }

        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxlen = max(maxlen, len);
        }

        if(preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxlen;
  
   */

  //Approach 3 : Optimal (2 Pointer)
  // Move forward(R), check if sum>k, if YES then subtract the current sum with arr[left] and left++
  // So you move forward and check sum and trim the left part
  //This code is only valid for POSITIVES
  //TC -> O(2N) SC-> O(1)

  int left = 0, right = 0;
  long long sum = a[0];
  int maxlen = 0;
  int n = a.size();

  while(right<n){

    while(left <= right && sum > k)
    {
      sum = sum - a[left];
      left++;
    }
    
    if(sum==k){
      maxlen = max(maxlen, right - left + 1);
    }

    right++;
    if(right<n)sum = sum + a[right];
  }
    return maxlen;
  }
