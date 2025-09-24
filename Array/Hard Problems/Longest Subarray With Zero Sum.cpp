#include<vector>
#include<bits/stdc++.h>

int getLongestZeroSumSubarrayLength(vector<int> &arr){

	// Optimal Code -> TC - O(Nlogn) & SC - O(N)
	int Maxlength = 0;
	int sum = 0;
    map<int,int> mpp;   // Key - Sum, Value - index
	int n = arr.size();
	for(int i=0;i<n;i++){
		sum = sum + arr[i];
		if(sum == 0) // Normal Sum of subarray if directly 0
		{
			Maxlength = i+1;
		}
		else{
			if (mpp.find(sum) != mpp.end()){
				Maxlength = max(Maxlength,i-mpp[sum]);
			}
			else{
				mpp[sum]=i;
			}
		}
		
	}
	return Maxlength;	
}
