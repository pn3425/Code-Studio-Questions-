int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low = 0, high = n - 1;
	int ans = n; // Hypo case, if even no element which is greater than x, return the size of array
	while(low <= high){
		int mid = (low + high)/2;
		if(arr[mid] >= x){
			ans = mid;
			high = mid - 1; // Go Left
		}
		else{
			low = mid + 1; // GO Right
		}
	} 
	return ans;
}
