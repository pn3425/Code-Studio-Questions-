// Ref - https://github.com/pn3425/GFG-Questions/blob/main/Array/Majority%20Element.cpp (Part 1 n/2)

#include<bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	// Write your code here

	/*Brute Force -> Pick one element, check how many times it comes and then return that ele if >n/3
					TC -> O(n^2) sc -> o(1) */

//--------------------------------------------------------------------------------------------------------------------
   // Better -> Use Hash Map, TC-> O(N*logn) SC -> O(N)

  /*
   vector<int> ls;
   map<int,int> mpp;
   int n = v.size();
   int mini = (int)(n/3) + 1; //Floor

   for(int i=0;i<n;i++)
   {
	   mpp[v[i]]++;
	   if(mpp[v[i]] == mini)
	   {
		   ls.push_back(v[i]);
	   }
	   if(ls.size() == 2) //Max 2 ans
	   break;
   }
   sort(ls.begin(),ls.end());
   return ls;*/

//---------------------------------------------------------------------------------------------------------------

   // Best - Ref : https://github.com/pn3425/GFG-Questions/blob/main/Array/Majority%20Element.cpp
   // Similar approach like n/2 question, here little modification and for ele1 & ele2 code replica

   int cnt1=0,cnt2=0;
   int ele1=INT_MIN, ele2=INT_MIN;
   int n = v.size();
   for(int i=0;i<n;i++)
   {
      if(cnt1==0 && v[i]!=ele2) //Selection of ele1/ele2
      {
         cnt1++;
         ele1=v[i];
      }
      else if(cnt2==0 && v[i]!=ele1)
      {
         cnt2++;
         ele2=v[i]; 
      }
      else if(v[i]==ele1) cnt1++;
      else if(v[i]==ele2) cnt2++;
      else{
         cnt1--,cnt2--;
      }
   }

   vector<int> ls;
   cnt1=0, cnt2=0;
   for(int i=0;i<n;i++){ //Checking whether that ele occ is >n/3
      if(v[i]==ele1){
         cnt1++;
      }
      if(v[i]==ele2){
         cnt2++;
      } 
   }
   int mini = (int)(n/3)+1;
   if(cnt1 >= mini) ls.push_back(ele1);
   if(cnt2 >= mini) ls.push_back(ele2);
   sort(ls.begin(),ls.end());
   return ls;
}
