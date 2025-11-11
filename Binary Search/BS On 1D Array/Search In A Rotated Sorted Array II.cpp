// Take the reference of the PART I also

bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    // Write your code here.
    int n = A.size();
    int low = 0, high = n-1;
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(A[mid] == key) return true; // When mid is the target (k)
        if(A[low] == A[mid] && A[mid] == A[high]){ // EXTRA ADDITION TO PREVIOUS PART 1 QUESTION, WHICH WAS UNIQUE ELEMENT QUESTION
            low++;
            high--; 
            continue;
        }

        //Now Check When Left Sorted (since the whole array is not sorted, hence identify)
    if(A[low] <= A[mid]) {

        if(A[low] <= key && key <= A[mid]){ // Target mid se kam but low se zyada
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
      }

    else{

        if(A[mid] <= key && key <= A[high]){ // Target mid se zyada but high se kam
            low = mid + 1;
        }

        else{
            high = mid - 1; 
        }
    }
  }
  return false;


}
