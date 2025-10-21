//---------------------- Iterative Approach - TC -> O(logbase2 n) -------------------------------------
/*
int Bsearch(vector<int> &nums, int low, int high, int target)
{
    int n = nums.size();
    while(low<=high){
        int mid = (low + (high - low )/2);
        if(nums[mid] == target) return mid;
        else if( target > nums[mid]) low = mid + 1;
        else high = mid - 1;  
    }
    return -1;
}

int search(vector<int> &nums, int target) {
    // Write your code here.
    return Bsearch(nums, 0, nums.size()-1, target);
}*/

//----------------------------- Recursive Approach---------------------------------------------

int Bsearch(vector<int> &nums, int low, int high, int target)
{
        if(low > high) return -1;  //Base Condition
        int mid = (low + (high - low )/2);
        if(nums[mid] == target) return mid;
        else if( target > nums[mid]) return Bsearch(nums, mid+1, high, target);
        else return Bsearch(nums, low, mid-1, target);
    
}

int search(vector<int> &nums, int target) {
    // Write your code here.
    return Bsearch(nums, 0, nums.size()-1, target);
}
