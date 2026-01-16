/*
------------------Brute Force -> TC -> O(m*n)-------------------------------

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
   int index = -1;
   int maxcnt = -1;
   for(int i=0;i<n-1;i++){
       int cntrow = 0;
       for(int j=0;j<m-1;j++){
           cntrow += matrix[i][j];
       }
       if(cntrow > maxcnt){
           maxcnt = cntrow;
           index = i;
       }
   }
   return index;
}
*/
//--------------------- Optimal -> Using BS ------------------------------
/*
Note -> 1) The optimization is done for the horizaontal part calulation
        2) Traversal part for row still remains the same as BRUTE approach
        3) So for horizontal optimization/calculation use 
            -> Lowerbound OR Upperbound OR First Occurence
*/

int Lowerbound(vector<int>&arr, int n,int x){
    int low = 0, high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    int cnt_max = 0;
    int index = -1;
    for(int i=0;i<n;i++){
        int cnt_ones = m - Lowerbound(matrix[i],m,1);
        if(cnt_ones  > cnt_max){
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}
