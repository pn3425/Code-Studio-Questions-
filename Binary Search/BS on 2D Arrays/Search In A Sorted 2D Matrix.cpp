// Brute -> Traverse each element and check

/* Better ->  TC -> O(n * log2m)
bool searchElement(vector<vector<int>> &MATRIX, int target) {
    for(int i=0;i<n;i++){
        ind = bs(MATRIX,target);
        if(ind != -1){
            return {i,ind}; OR return true;
        }
    }
return {-1,-1};
}
*/

// Optimal Sol - > TC : O(n+m)

bool searchElement(vector<vector<int>> &MATRIX, int target) {
    int n = MATRIX.size();
    int m = MATRIX[0].size(); //No.of Col
    int row = 0, col = m - 1; // Fixing the starting point
    while(row < n && col >= 0){ //Condition 
        if(MATRIX[row][col] == target){
            return true; //if directly found return
        }
        else if(MATRIX[row][col] < target){
            row++;  // If the current element is less than target, that means every element in that row before that will also be small, hence row++
        }
        else{
            col--;
        }
    }
    return false;
}
