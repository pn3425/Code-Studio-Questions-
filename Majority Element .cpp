#include<map>
int majorityElement(vector<int> v) {
	// Write your code here
    //Using Hash Map
    map<int,int> mpp;

    for (int i = 0; i < v.size(); i++) {

       mpp[v[i]]++;      //Mark the elements     // Key,Value 
    }


  for(auto it:mpp)
  {
     if(it.second > (v.size()/2))     //second - count  // first - element
     return it.first;
  }
}
