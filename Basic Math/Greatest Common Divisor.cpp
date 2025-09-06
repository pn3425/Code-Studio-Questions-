#include <bits/stdc++.h> 
int findGcd(int x, int y)
{
    // Write your code here
    //Final Approach using Euclidean
    while(x>0 && y>0)
    {
      if(x>y) x = x % y;
      else
      y = y % x;
    }

    if(x==0)
    return y;
    else
    return x;
}



/*
My Approach  : Approach 1 (Not Passing)

   vector<int> x1;
    vector<int> y1;
    for(int i=1;i<=sqrt(x);i++)
    {
        if ( x % i == 0)
          x1.push_back(i);
          if( (x/i) != i )
            x1.push_back(x/i);
    }
   
    for(int i=1;i<=sqrt(y);i++)
    {
         if ( y % i == 0)
          y1.push_back(i);
          if( (y/i) != i )
            y1.push_back(y/i);  
    }

    sort(x1.begin(), x1.end(),greater<int>());
    sort(y1.begin(), y1.end(),greater<int>());

    for(auto i : x1)
    {
       if (find(y1.begin(), y1.end(), i) != y1.end())
       {
            return i;
       }
    }
    return 1;


Striver Approach 1 : (Partially Accepted, Brute Force, Linear TC)

  for(int i=min(x,y); i>=1; i--)
  {
    if(x%i==0 && y%i==0)
    {
      return i;
      break;
    }
  }
  return 1;


Striver Approach 2 : Euclidean 

Logic of Euclidean Algorithm

The Euclidean algorithm is based on a simple property:

gcd(a, b) = gcd(b, a % b)
(until one number becomes 0)

x=20, y=28
x < y → y = 28 % 20 = 8   (x=20, y=8)
x > y → x = 20 % 8 = 4    (x=4, y=8)
x < y → y = 8 % 4 = 0     (x=4, y=0)
Loop ends.
Answer = x = 4


*/
