/*
Approach 1 : Brute Force : TC-> O(n*m), Traverse each element and check

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j] == target){
                return true;
            }
        }
    }
    return false    
}

// --------------------------------------------------------------------------------

Approach 2 : Optimal/Better : TC -> O(n) + O(log2 m)
Go Row by Row if that element exists or not if YES apply BS

bool BS(vector<int>arr, int target){
    int low = 0, high = arr.size()-1;
    while( low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            return true;
        }
        if(target >= arr[mid]){
            low = mid + 1;
        }
        else{
           high = mid - 1; 
        }
    }
    return false;

}

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();
    for(int i=0;i<n;i++){
        if(mat[i][0] <= target && target <= mat[i][m-1] ){
            return BS(mat[i],target);
        }
    }
    return false;
}*/

/*------------------------------------------------------------------------------

// Approach 3 : More Optimal : TC -> O(log2 (m*n))
 Treat 2D matrix into 1D and flatten (Just Imagine)
-> IMP Find Coordinates of that element
 */

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();
    int low = 0, high = n*m-1;
    while( low <= high){
        int mid = (low+high)/2;
        int row = mid/m, col = mid%m; //Finding exact coordinate in 2D matrix, of the element that was flatten for imagination
        if(mat[row][col] == target){
            return true;
        }
        if(mat[row][col] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return false;
}


