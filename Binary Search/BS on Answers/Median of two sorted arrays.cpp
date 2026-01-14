/*
double median(vector<int>& a, vector<int>& b) {
// Brute Force : 
 vector<int> ans;
 int n1 = a.size();
 int n2 = b.size();
 int i=0,j=0;
 while(i<n1 && j<n2){
	 if(a[i]<b[j]){
		 ans.push_back(a[i++]);
	 }
	 else{
		 ans.push_back(b[j++]);
	 }
 }
 	while(i<n1)ans.push_back(a[i++]);
	while(j<n2)ans.push_back(b[j++]);
	int n = n1 + n2;
	if(n % 2 == 1) return ans[n/2];
	return (double)((double)(ans[n/2])+ (double)(ans[n/2 - 1])) / 2.0;
}*/

//------------------- Better -------------------------------
/*
double median(vector<int>& a, vector<int>& b) {
	int n1 = a.size();
	int n2 = b.size();
	int i=0;
	int j=0;
	int n = n1 + n2;
	int ind2 = n/2;
	int ind1 = ind2 - 1;
	int ind1el = -1, ind2el = -1;
	int cnt = 0;
	while(i<n1 && j<n2){
		if(a[i] < b[j]){
			if(cnt == ind1) ind1el = a[i];
			if(cnt == ind2) ind2el = a[i];
			cnt++;
			i++;
		}
		else{
			if(cnt == ind1) ind1el = b[j];
			if(cnt == ind2) ind2el = b[j];
			cnt++;
			j++;
		}
	}
	while(i<n1){
			if(cnt == ind1) ind1el = a[i];
			if(cnt == ind2) ind2el = a[i];
			cnt++;
			i++;
	}
	while(j<n2){
			if(cnt == ind1) ind1el = b[j];
			if(cnt == ind2) ind2el = b[j];
			cnt++;
			j++;
	}
	if(n % 2 == 1) return ind2el;
	else {
	return (ind1el + ind2el) / 2.0;}
}*/

// ------------------------------OPTIMAL ------------------------------
double median(vector<int>& a, vector<int>& b){
	int n1 = a.size();
	int n2 = b.size();
	if(n1 > n2) return median(b,a); // Check for size and then choose the smallest vector
	int n = n1 + n2; // Total n
	int low = 0, high = n1; // Range acc to smallest vector/array
	int left = (n1+n2+1)/2; // How many element of Left side

	while( low <= high){
		int mid1 = (low + high) >> 1; // Normal BS, IF mid1 = 2
		int mid2 = left - mid1;  // then mid2 = 5-2 = 3 (Left - mid1)
		int l1 = INT_MIN, l2 = INT_MIN; //Initiliaze as min
		int r1 = INT_MAX, r2 = INT_MAX; //Initiliaze as max
		if(mid1 < n1) r1 = a[mid1]; // Check if n1 is greater that means hypothetical case index
		if(mid2 < n2) r2 = b[mid];
		if(mid1 - 1 >= 0) l1 = a[mid1-1]; //assign l1 its value
		if(mid2 - 1 >= 0) l2 = b[mid2-1];
		if(l1 <= r2 && l2 <= r1){ // Base CROSS condition during partition
			if(n % 2 == 1) return max(l1,l2); // For ODD case 
			return ((double)(max(l1,l2) + min(r1,r2))) / 2.0; // For even case

		}
		else if (l1>l2) high = mid - 1; // Main condition's to eliminate RH & LH accordingly
		else low = mid + 1;
	}
   return 0;
}
