int findPeakElement(vector<int> &arr) {

    // App 1 : Using LS // TC -> O(logn)
    
    // App 2 : Using BS TC -> O(log2n)
    int n = arr.size();
    if(n==1)return 0;  // Return 0, If only 1 element
    if(arr[0] > arr[1])return 0; // Return 0, for first element
    if(arr[n-1] > arr[n-2]) return n-1; // Return n-1, for last element

    int low = 1, high = n-2; //Trimmed Search Space
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]) {
            return mid;
        }
        else if(arr[mid] > arr[mid-1]){ // Search RH
            low = mid + 1;
        }
        else if(arr[mid] > arr[mid+1]){ //Search LH
            high = mid - 1;
        }
        else{
            low = mid + 1; //To handle multiple peaks
        }
    }
    return -1;
 }
