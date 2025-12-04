#include <bits/stdc++.h> 

/*
int sqrtN(long long int N)
{
    // Write your code here.
// Already Code---------------------------------------------------------------------------------
    int s=0;
    int e=N;
    long long int mid = e + (e-s)/2,ans = -1;
    while(s<=e){
    long long square = mid * mid;
    if(square == N)
    {
        return mid;
    }
    if (square < N)

    {
      ans = mid;
      s = mid + 1;
    }
    else
    {
     e = mid -1 ;
    }
    mid = e + (e-s)/2;
    }
    return ans;
}*/
 //------------------STRIVER APPROACH---------------------------------------------------  

 
int floorSqrt(int N) {
  // Brute Force : log(n)

  /*for(int i=1;i<n;i++)
  {
    if(i * i <= n)
    {
      ans = i;
    }
    else{
      break;
    }
  }
  return ans;*/

  // Optimal - TC -> log(2n)
  int low = 1, high = N;
  while( low <= high){
    long long mid = (low + high) / 2;
    long long val = mid * mid;
    if(val <= N){    // Check if val is less so move RIGHT, eliminate LEFT
      low = mid + 1;
    }
    else{
      high = mid - 1; // Move LEFT, Eliminate RIGHT
    }
  }
  return high;
}
