vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    unordered_map<int,int> map;

    for(int i=0;i<v.size();i++)
    {
        map[v[i]]++;
    }

    int n = v.size();
    int maxFreq=0, minFreq=n;
    int maxEle=INT_MAX, minEle=INT_MAX;

    for(auto it : map)
    {
       int count = it.second;
       int ele = it.first;
        if (count > maxFreq || (count == maxFreq && ele < maxEle)) 
       {
           maxEle = ele;
           maxFreq = count;
       }

       if (count < minFreq || (count == minFreq && ele < minEle))
       {

           minEle = ele;
           minFreq = count;
       }
    } 
       vector<int> res;
        res.push_back(maxEle);
        res.push_back(minEle);
        return res;

}
