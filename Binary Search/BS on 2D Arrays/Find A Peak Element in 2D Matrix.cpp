// TC -> O(log2m * n)

int FindMaxIndex(vector<vector<int>> &g, int n,int m,int col){
    int maxvalue = -1;
    int index = -1;
    for(int i=0;i<n;i++){
        if(g[i][col] > maxvalue){
            maxvalue = g[i][col];
            index = i;
        }
    }
    return index;
}

vector<int> findPeakGrid(vector<vector<int>> &g){
   int n = g.size();
   int m = g[0].size();
   int low = 0, high = m-1;
   while(low <= high){
       int mid = (low + high) / 2;
       int maxrowindex = FindMaxIndex(g,n,m,mid);
       int left = mid-1 >= 0 ? g[maxrowindex][mid-1] : -1;
       int right = mid+1 < m ? g[maxrowindex][mid+1] : -1;
       if(g[maxrowindex][mid] > left && g[maxrowindex][mid] > right) {
           return {maxrowindex,mid};
       }
       else if(g[maxrowindex][mid] < left) high = mid - 1;
       else low = mid + 1;
   }   
   return {-1,-1};
}
