#include <bits/stdc++.h> 
vector<int> getAllDivisors(int n){
    // Write your code here
    vector<int> resf;
    for(int i=1;i<=sqrt(n);i++)
    {
        
        if(n % i == 0 )
        {
            resf.push_back(i);

            if((n/i) != i)
            {
                 resf.push_back(n/i);
            }
        }
    }
    sort(resf.begin(), resf.end());
    return resf;
}

/*

10 - 1 2 5 10

10/1 -> 10     n/i -> q
10/2 -> 5
10/5 -> 2
10/10 -> 1


*/
