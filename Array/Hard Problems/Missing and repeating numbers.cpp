#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
 
// Brute Force : TC -> O(n^2), SC -> O(1)
/*
	int missing = -1, repeating = -1;
	for(int i=0;i<n;i++)
	{
		int cnt=0;
		{
			for(int j=0;j<n;j++)
			{
				if(arr[j] == i) cnt++:
			}
		}
		if(cnt == 2) repeating = i;
		else if(cnt == 0) missing = i;

		if(missing != -1 && repeating != -1){
		break;
		}

	return{missing,repeating};

	}
*/

//------------------------------------------------------------------------------------------------------
   // Better Solution : TC -> O(n), SC -> O(n)
	/*
	int hash[n+1]={0};
	int missing = -1, repeating = -1;
	for(int i=0;i<n;i++)
	{
		hash[arr[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(hash[i]==2) repeating = i;
		else if(hash[i]==0) missing = i;

		if(missing != -1 && repeating != -1){
			break;
		}
	}
	return{missing,repeating};*/
	
//-----------------------------------------------------------------------------------------

 //Optimal Solution : TC-> O(n) SC->O(1)
 
  long long N = arr.size();
  // S - Sn = x - y
  // S2 - S2n = x2 - y2 (Squares)
  long long Sn = (N * (N+1)) / 2;
  long long S2n = (N * (N+1) * (2*N+1)) / 6;
  long long S = 0, S2 = 0;

  for(int i=0;i<n;i++)
  {
	  S += arr[i];
	  S2 += (long long) arr[i] * (long long) arr[i];  
  }

  long long val1 = S - Sn; // x-y
  long long val2 = S2 - S2n; //x2 - y2
  val2 = val2/val1; //x+y
  long long x = (val1 + val2) / 2;
  long long y = x - val1;
  return{int(y), int(x)};
}
