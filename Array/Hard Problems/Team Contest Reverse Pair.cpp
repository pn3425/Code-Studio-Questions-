//App 1 Using Global Variable, But Not Good Practise

/*
int cnt = 0;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Main Function for CountPair (Addition for this question)
void CountPair(vector<int> &arr, int low, int mid, int high){
    int right = mid+1;
    for(int i=low;i<=mid;i++){
        while(right <= high && arr[i] > 2*arr[right]) right++;
        cnt += (right-(mid+1));
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    CountPair(arr,low,mid,high); // Addition for this question
    merge(arr, low, mid, high);  // merging sorted halves
}
*/

//--------------------Approach 2 : Without Count as Global Variable------------------------------------

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Main Function for CountPair (Addition for this question)
int CountPair(vector<int> &arr, int low, int mid, int high){
    int right = mid+1;
    int cnt=0;
    for(int i=low;i<=mid;i++){
        while(right <= high && arr[i] > 2*arr[right]) right++;
        cnt += (right-(mid+1));
    }
    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high) {
    int cnt=0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);  // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += CountPair(arr,low,mid,high); // Addition for this question
    merge(arr, low, mid, high);  // merging sorted halves
    return cnt;
}

int team(vector <int> & skill, int n)
{
    // Write your code here.
   return mergeSort(skill,0,n-1);
   
}
