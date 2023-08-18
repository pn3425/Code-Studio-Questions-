#include <map>
#include <unordered_map>
string read(int n, vector<int> book, int target)
{

//Approach 1
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;i<n;j++)
//         {         
//            if(book[i]+book[j]==target)
//            {
//                return "YES";
//            }

//         }
//     }
//   return "NO";

//Approach 2 Pointer   
// sort(book.begin(),book.end());
//    int left = 0;
//    int right=n-1;

//    while(left<right)
//    { 
//       int sum = book[left]+book[right];
//       if(sum==target)
//       {
//           return "YES";
//       }   

//      else if(sum<target)
//      left++;

//      else
//      right--;
//    }
// return "NO";

//   return "NO";

//Approach 3
   unordered_map<int,int>mpp;
   for(int i=0;i<n;i++)
   {
       int a=book[i];
       int more = target-a;
       if (mpp.find(more) != mpp.end()) {
         return "YES";
       }
     mpp[a]=i;
   }
   return "NO";
}

