// Brute Force : TC -> O(maxi-min+1) * O(n)

/*
bool possible(vector<int> arr, int day, int m, int k)
{
	int cnt = 0, noOfB = 0;
	for(int i=0;i<arr.size();i++){
		if(arr[i] <= day){
			cnt++;
		}
		else
		{
			noOfB += (cnt / k); // Check how many adjacent flowers can be used
		}
	}
	noOfB += (cnt / k); // When count reaches last value hence also check that

	// Now check how many bouquet can be formed
	return noOfB >= m; // Returning true if noOfB >= m
}

int roseGarden(vector<int> arr, int k, int m)
{
	if(n < m * k) return -1; // (Impossible Case)

	for(int i = min;i <= max; i++)
	{
		if(possible(arr,i,m,k)) == true
			return i;
	}
	return -1;
}*/

// -----------------------------------------------------------------------------------------

/* Optimized : Elimiate the need to iterate every element and check is that element is possible
              and then Elimiate the RH or LH accordingly 
			  
			TC -> 0( N * log2 (max-min+1))
			  */

bool possible(vector<int> arr, int day, int m, int k)
{
	int cnt = 0, noOfB = 0;
	for(int i=0;i<arr.size();i++){
		if(arr[i] <= day){
			cnt++;
		}
		else
		{
			noOfB += (cnt / k); // Check how many adjacent flowers can be used
			cnt = 0;
		}
	}
	noOfB += (cnt / k); // When count reaches last value hence also check that

	// Now check how many bouquet can be formed
	return noOfB >= m; // Returning true if noOfB >= m
}

int roseGarden(vector<int> arr, int k, int m)
{
	long long val = k * 1LL * m * 1LL;
	if (val > arr.size()) return -1; //Impossible scenario check

	int mini = INT_MAX, maxi = INT_MIN;
	for(int i=0;i<arr.size();i++){
		mini = min(arr[i],mini);
		maxi = max(arr[i],maxi);	
	}
	int low = mini, high = maxi;
	while(low <= high){
		int mid = (low + high) / 2;
		if(possible(arr,mid,m,k)){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return low;
}




	
