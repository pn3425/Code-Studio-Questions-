int findMin(vector<int>& arr)
{
	int n = arr.size();
	int low = 0, high = n-1, ans = INT_MAX;
	while(low <= high){
		int mid = (low + high) / 2;
		if(arr[low] <= arr[mid]){
			ans = min(ans, arr[low]); //Pick min from Left half
			low = mid + 1; //Eliminate Left half
		}
		else{
			high = mid - 1; //Eliminate Right Half
			ans = min(ans, arr[mid]); //Pick min from Right half
			
		}
	}
	return ans;
}
