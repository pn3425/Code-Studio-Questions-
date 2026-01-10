// Similar to Book Allocation & Painter Partition

#include<bits/stdc++.h>
int countSubarraysRequired(vector<int> a, int maxAllowedSum){
    int subarrayCount = 1;
    long long currentSubarraySum  = 0;
    for(int i=0;i<a.size();i++){
        if(currentSubarraySum + a[i] <= maxAllowedSum){
            currentSubarraySum += a[i];
        }
        else{
            subarrayCount++;
            currentSubarraySum = a[i];
        }
    }
    return subarrayCount;
}

int largestSubarraySumMinimized(vector<int> a, int k) {
    int n = a.size();
    if(k>n) return -1;
    int low = *max_element(a.begin(),a.end());
    int high = accumulate(a.begin(),a.end(),0);
    while( low <= high){
        int mid = (low+high)/2;
        int requiredSubarrays  = countSubarraysRequired(a,mid);
        if(requiredSubarrays > k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}
