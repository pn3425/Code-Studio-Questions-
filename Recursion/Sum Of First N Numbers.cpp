//Recursive Approach
long long sumFirstN(long long n) {
    // Write your code here.
    if(n == 0 ) return 0;
    return n+sumFirstN(n-1); 
}

//Normal Approach

   long long ans;
    ans = n * (n+1)/2;
    return ans;
