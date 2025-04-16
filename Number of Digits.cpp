#include <bits/stdc++.h> 
int countDigit(long long x) {
    // Write your code here.
    int r;
    int count=0;;
    //int num = x;
    while(x>0)
    {
        r = x % 10;
        count++;
        x = x / 10;
    }
    return count;
}
