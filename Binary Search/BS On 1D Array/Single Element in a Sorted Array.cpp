int singleNonDuplicate(vector<int>& arr)
{
  // TC -> log2n
	// Write your code here
	int n = arr.size();
	if (n == 1) return arr[0]; // If array only has 1 element
	if( arr[0] != arr[1]) return arr[0];
	if( arr[n-1] != arr[n-2]) return arr[n-1]; 
	int low = 1, high = n-2; // Trimming space

	while(low <= high)
	{
		int mid = (low+high)/2;
		if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1]) // Means the Right & Left element are not equal, hence the mid is the UNIQUE ELEMENT
		{
			return arr[mid];
		}

		// Eliminating Left Half (Unique Element in Right Half)

		         //I am on ODD Index (ODD,EVEN)                 I am on EVEN Index
		// if(( mid % 2 == 1 && arr[mid] == arr[mid-1]) || ( mid % 2 == 0 && arr[mid+1]))

		if ((mid % 2 == 1 && arr[mid] == arr[mid-1]) ||
            (mid % 2 == 0 && arr[mid] == arr[mid+1]))
		{
			low = mid + 1; //Eliminate left half
		}
		else
		{
			high = mid - 1; //Eliminating right half
		}
	}
	return -1;
}
