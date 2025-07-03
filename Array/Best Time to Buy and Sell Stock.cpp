#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.

    // For maximum profit -> sell at the price {start to min(ith-1) } if you purchased at ith posi
    int mini = prices[0];
    int maxprofit = 0;
    for(int i=1;i<prices.size();i++)
    {
        int cost = prices[i] - mini;
        maxprofit = max(maxprofit,cost);
        mini = min(mini, prices[i]);
    }
    return maxprofit;
}
/*
Dry Run
[2,100,150,120]

Initial -> mini-2   maxprofit-0

 cost         maxprofit           mini
100-2=98     0,98 -> 98        2,100 -> 2
150-2=148    98,148 -> 148     2,150 -> 2     
120-2=118    148,118 -> 148    2,120 -> 2

return maxprofit(148)
*/
