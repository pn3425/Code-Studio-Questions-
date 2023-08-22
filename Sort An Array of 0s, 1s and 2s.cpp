#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
     // Write your code here
     int zerocnt=0;
     int onecnt=0;
     int twocnt=0;

     for(int i=0;i<n;i++)
     {
         if(arr[i] == 0)
         {
             zerocnt++;
         }
         else if(arr[i] == 1)
         {
             onecnt++;
         }
         else if(arr[i] == 2)
         {
             twocnt++;
         }
     }

     for(int i=0;i<zerocnt;i++)
     {
         arr[i]=0;
     }

    for(int i=zerocnt;i<zerocnt+onecnt;i++)
    {
        arr[i]=1;
    }

    for(int i=zerocnt+onecnt;i<n;i++)
    {
        arr[i]=2;
    }

}
