#include<bits/stdc++.h>
int subarrayWithMaxProduct(vector<int> &arr){

/*
 //------------ Brute : TC -> O(n^3), SC -> O(1)----------------------------------------------

	int maxi = INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int prod = 1;
			for(int k=i;k<j;k++)
			{
				prod = prod * arr[k];
			}
		maxi = max(maxi,prod);
		}
	}
	return maxi;
}

//-------------- Better : TC -> O(n^2), SC -> O(1)-------------------------------------

	int maxi = INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int prod = 1;
			{
				prod = prod * arr[j];
			}
		maxi = max(maxi,prod);
		}
	}
	return maxi;
}*/

//--------------------------------------------------------------------------------------
	// Optimal : TC-> O(n) SC -> O(1)

	int prefix = 1, suffix = 1;
	int maxi = INT_MIN;
	int n = arr.size();
	for(int i=0;i<n;i++)
	{
		if(prefix == 0) prefix = 1;
		if(suffix == 0) suffix = 1;
		prefix = prefix * arr[i];
		suffix = suffix * arr[n-i-1];
		maxi = max(maxi, max(prefix,suffix));
	}
	return maxi;
}
