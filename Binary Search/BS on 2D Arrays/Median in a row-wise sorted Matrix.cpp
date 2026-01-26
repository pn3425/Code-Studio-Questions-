int UpperBound(vector<int>arr, int n, int x){
    int low = 0;
    int high = n - 1;
    int ans = n;
    while( low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] > x){
            ans = mid;
            high = mid - 1;
        }
        else{
        low = mid + 1;
        }
    }
    return ans;
}

int CountSmallEquals(vector<vector<int>> &matrix,int n, int m, int x){
    int count = 0;
    for(int i=0;i<n;i++){
        count += UpperBound(matrix[i],m,x); // Send only row by row to get the count
    }
    return count;
}

int median(vector<vector<int>> &matrix, int m, int n) {
    n = matrix.size();
    m = matrix[0].size();
    int low = INT_MAX; int high = INT_MIN;
    for(int i=0;i<n;i++){
         low = min(low, matrix[i][0]);    //Pick the smallest from 0th col
         high = max(high, matrix[i][m-1]); //Pick the largest from the last col
    }
    int req = (n * m) / 2;
    while( low <= high){
        int mid = (low + high)/2;
        int CountSmallE = CountSmallEquals(matrix,n,m,mid); 
        if(CountSmallE <= req){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}
