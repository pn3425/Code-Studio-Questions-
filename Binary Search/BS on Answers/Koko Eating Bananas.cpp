#include<bits/stdc++.h>

// TC -> O(log N * log2 (max ele))

int findMax(vector<int> v){
    int maxi = INT_MIN;
    int n = v.size();
    for(int i=0;i<n;i++){
        maxi = max(maxi,v[i]);
    }
    return maxi;
}

int CalculateTotalHrs(vector<int> v, int hourly){
    int TotalH = 0;
    int n = v.size();
    for(int i=0;i<n;i++){
        TotalH += ceil((double)v[i] / (double)hourly);
    }
    return TotalH;
}

int minimumRateToEatBananas(vector<int> v, int h) {
    // Write Your Code Here

    int low = 1, high = findMax(v);
    while( low <= high){
        int mid = (low + high)/2;
        int totalh = CalculateTotalHrs(v,mid);
        if(totalh <= h){
            high = mid - 1; // Go left
        }
        else
        {
            low = mid + 1; //Value is small, so go Right
        }
    }
    return low;
}
