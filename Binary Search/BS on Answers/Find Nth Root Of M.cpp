/* Brute Force 

for(int i=1;i<m;i++){
  if(f(i,n) == m) return i;
  else if(f(i,n) > m) break;
}
return -1;

Where f(i,n) calculates the i ^ n
*/

//return 1 if == m
//return 0 if < m
//return 2 if > m
int func(int mid, int n, int m){
  long long ans = 1;
  for(int i=1;i<=n;i++){
    ans = ans * mid;    // Calculating mid ^ n
    if( ans > m) return 2;
  }
  if( ans == m) return 1;
  return 0;
}

int NthRoot(int n, int m) {
  // Write your code here.
  int low = 1, high = m;
  while(low <= high){
    int mid = (low + high)/2;
    int midN = func(mid, n ,m);
    if(midN == 1) {
      return mid;
    }
    else if (midN == 0) low = mid + 1; //Eliminate Left
    else high = mid - 1; // Eliminate Right
  }
  return -1;
}
