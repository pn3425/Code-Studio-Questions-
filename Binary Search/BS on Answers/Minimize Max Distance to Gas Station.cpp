// Brute Linear Search -> Complex Refer Notes 
#include<bits/stdc++.h>
// Better -> Using Priority Queue, TC -> NlogN + Klogn, SC -> O(N-1)

/*
long double minimiseMaxDistance(vector<int> &arr, int k){
	int n = arr.size();
	vector<int> howMany(n-1,0);	//Creating a vector for gas station count
	priority_queue<pair<long double, int>> pq;
	for(int i = 0; i < n-1; i++){
		pq.push({(long double)(arr[i+1] - arr[i]), i});
	}

	for(int gasStations = 1; gasStations <= k; gasStations++){ //Running loop for Gasstation
		auto tp = pq.top(); pq.pop();
		int secInd = tp.second; // Section index is the second element in priority queue (dist,index)
		howMany[secInd]++; // Initial 0, keeps increasing if GS added one by one
		long double iniDiff = arr[secInd+1] - arr[secInd];
		long double newSecLen = iniDiff / (long double) (howMany[secInd] + 1);
		pq.push({newSecLen,secInd});
	}
	return pq.top().first;
}*/

// Optimal -> TC -> O(NlogN + N), SC - O(1)

long double numberofgs(long double dist, vector<int> &arr){
	int cnt = 0;
	for(int i=1;i<arr.size();i++){
		int NumberInBetween = ((arr[i] - arr[i-1]) / dist);
		if((arr[i]-arr[i-1]) / dist == NumberInBetween * dist){
			NumberInBetween--;
		}
		cnt += NumberInBetween;
	}
	return cnt;
}

long double minimiseMaxDistance(vector<int> &arr, int k){
	long double low = 0;
	long double high = 0;
	for(int i=0;i<arr.size()-1;i++){
		high = max(high,(long double)arr[i+1]-arr[i]);
	}

	long double diff = 1e-6;
	while(high - low > diff){
		long double mid = (low+high) / (2.0);
		int cnt = numberofgs(mid,arr);
		if(cnt > k){
			low = mid;
		}
		else{
			high = mid;
		}
	}
	return high;
}
