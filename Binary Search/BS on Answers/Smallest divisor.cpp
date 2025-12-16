//Brute Force
/* TC -> O(max * n)
Pseudo Code

for(int d=1;d<max(arr);d++) 
{
	int sum = 0;
	for(int i=0;i<n;i++){
		sum += ceil(arr[i]/d);
	}
	if(Sum <= threshold)
		return d;
}
return -1;
*/
// --------------------------------- OPTIMIZED TC -> O(log2 (max) * n)
int sumByd(vector<int>& arr, int div){
	int sum=0;
	for(int i=0;i<arr.size();i++){
		sum += ceil((double)(arr[i]) / (double)(div));
	}
	return sum;
}

int smallestDivisor(vector<int>& arr, int limit)
{
	int low = 1;
	int high = *max_element(arr.begin(), arr.end());
	while( low <= high){
		int mid = (low+high)/2;
		if(sumByd(arr,mid) <= limit){
			high = mid - 1; // Eliminate RH, Go to right for small numbers
		 } 
		 else{
			 low = mid + 1; //Elimiate LH, Go to Right for big number
		 }
	}
	 return low;
}
