#include <bits/stdc++.h>
string commonPrefix(vector<string> &arr, int n) {

	string maxPrefix="-1";
	int mincount=INT_MAX;

	for(int word=1;word<arr.size();word++)
	{
		int count=0;
		int len=min(arr[word].length(),arr[0].length());

		for(int i=0;i<len;i++)
		{
                  if (arr[0][i] == arr[word][i]) {
                    count++;
                  }
        

                else break;
        }
        mincount = min(count, mincount);
  }
    maxPrefix = arr[0].substr(0,mincount);
    if (mincount == 0) {
        return "-1";
       }
        return maxPrefix;
}
