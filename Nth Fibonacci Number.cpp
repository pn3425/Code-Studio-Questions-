#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==1 || n==2)
      return 1;

    int a=1,b=1;
    int c=0;
     for( int i=0;i<n-2;i++)
     {
        c=a+b;
        a=b;
        b=c;
     }
      
    return c;
}

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        int res = fib(n);
        cout<<res;
        

}
