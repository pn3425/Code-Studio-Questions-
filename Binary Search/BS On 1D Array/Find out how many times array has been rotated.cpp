// THIS QUESTION DOES NOT EXIST IN CODING PLATFORM, Ref Ques : https://github.com/pn3425/Code-Studio-Questions-/blob/main/Binary%20Search/BS%20On%201D%20Array/Find%20Minimum%20in%20Rotated%20Sorted%20Array.cpp

int findRotation(vector<int>& arr)
{
	int n = arr.size();
	int low = 0, high = n-1, ans = INT_MAX;
  int INDEX = -1;
	while(low <= high){
		int mid = (low + high) / 2;

    if(arr[low] <= arr[high]){
      if(arr[low] < ans){
          index = low;
          ans = arr[low];
      }
      // ans = min(ans, arr[low]); // Same code in if format above at line 12
      break;
    }
    
		if(arr[low] <= arr[mid]){
       if(arr[low] < ans){
          index = low;
          ans = arr[low];
      }
			// ans = min(ans, arr[low]); //Pick min from Left half
			low = mid + 1; //Eliminate Left half
		}
		else{
      high = mid - 1; //Eliminate Right Half
      if(arr[mid] < ans){
          index = mid;
          ans = arr[mid];
      }
						// ans = min(ans, arr[mid]); //Pick min from Right half
		}
	}
	return index;
}
