#include<bits/stdc++.h>
int paintersRequired(const vector<int>& boards, int maxPaintTime) {
    int painterCount = 1;
    long long currentPaintTime = 0;

    for (int i = 0; i < boards.size(); i++) {
        if (currentPaintTime + boards[i] <= maxPaintTime) {
            currentPaintTime += boards[i];
        } else {
            painterCount++;
            currentPaintTime = boards[i];
        }
    }
    return painterCount;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int n = boards.size();
    if(k>n) return -1;
    int low = *max_element(boards.begin(),boards.end());
    int high = accumulate(boards.begin(),boards.end(),0);
    while(low <= high){
        int mid = (low+high)/2;
        int requiredPainters = paintersRequired(boards, mid);
        if( requiredPainters > k){
            low = mid + 1;
        } 
        else{
            high = mid - 1;
        }
    }
    return low;
}
