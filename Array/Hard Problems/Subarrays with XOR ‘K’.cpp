#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
 
    // Brute Force - TC -> O(N^3) , SC -> O(1)
    /*
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
             int xor=0;
            for(int k=i;k<j;k++){
                xor = xor ^ a[k];
            }
            if(xor==b) cnt++;
        }
    }
    return cnt;*/
//--------------------------------------------------------------------------------

    // Better - TC -> O(N^2) , SC -> O(1)

    /*int cnt = 0;
    for(int i=0;i<n;i++){
        int xor=0;
        for(int j=i;j<n;j++){
                xor = xor ^ a[j];
            }
         if(xor==b) cnt++;
        }
    }
    return cnt;*/

//---------------------------------------------------------------------------------

    // Optimal - TC -> O(N) OR O(nlogn), SC -> O(n) (Map)

    map<int,int>mpp;
    int xr=0;
    int cnt=0;
    mpp[xr]++; // First Initialisation (0,1) (k- xr,v- cnt )
    for(int i=0;i<a.size();i++)
    {
        xr = xr ^ a[i];
        int x = xr ^ b;
        cnt+=mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
