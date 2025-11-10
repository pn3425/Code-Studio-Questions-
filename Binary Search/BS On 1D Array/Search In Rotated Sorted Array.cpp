int search(vector<int>& arr, int n, int k)
{
    int low = 0, high = n-1;
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(arr[mid] == k) return mid; // When mid is the target (k)

        //Now Check When Left Sorted (since the whole array is not sorted, hence identify)
    if(arr[low] <= arr[mid]) {

        if(arr[low] <= k && k <= arr[mid]){ // Target mid se kam but low se zyada
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
      }

    else{

        if(arr[mid] <= k && k <= arr[high]){ // Target mid se zyada but high se kam
            low = mid + 1;
        }

        else{
            high = mid - 1; 
        }
    }
  }
  return -1;

}

