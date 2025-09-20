#include<bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Brute Force Solution : TC -> O(n^3), SC -> 2*O(NO.OF TRIPLETS)

    /*
    set<vector<int>> st;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k] == 0)
                {
                    vector<int> temp = {arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;*/

//------------------------------------------------------------------------------------------------

    // Better - Use 2 loops, and use hashset

    /*
    set<vector<int>> st; //For sorting the triplets present in temp vector
    for(int i=0; i<n; i++){
        set<int> hashset; // To maintain arr[j] (Previous j)
        for(int j=i+1; j<n; j++)
        {
            int third = -(arr[i]+arr[j]); //Calc of third ele
            if(hashset.find(third) != hashset.end()){  // Check if third present or not
                vector<int> temp = {arr[i], arr[j], third}; // put all three in temp vector
                sort(temp.begin(),temp.end());  //sort it
                st.insert(temp); // Put everything in set, so that only unique pairs
            }
            hashset.insert(arr[j]); // if third not present in set, so put in the set
        }
    }
    vector<vector<int>> ans(st.begin(), st.end()); //finally put st in 2D vecor to return ans
    return ans;*/

//-----------------------------------------------------------------------------------------------

    //Optimal - Use 2 pointer approach

    vector<vector<int>> ans;
    sort(arr.begin(),arr.end()); //Sorting the array
    for(int i=0;i<n;i++)
    {
        if(i>0 && arr[i] == arr[i-1]) continue; //It does let the flow go down, basically i++
        int j = i + 1;
        int k = n - 1;

        while(j<k){    //Will execute till Crossing condition 
        int sum = arr[i] + arr[j] + arr[k];
        if(sum<0)
        {
            j++; //Towards 0 basically right to left
        }
        else if(sum>0)
        {
            k--; // Towards 0 basically left to Right
        }
        else{
            vector<int>temp = {arr[i], arr[j], arr[k]};
            ans.push_back(temp);
            j++;
            k--;

        while(j<k && arr[j] == arr[j-1]) j++;
        while(j<k && arr[k] == arr[k+1]) k--;
        }

      }
    }
    return ans;
}
