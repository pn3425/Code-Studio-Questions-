void merge(vector<int> &arr, int low, int mid, int high)
//Function to merge
{
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high) //So that it does not go out of array
  {
      if(arr[left]<=arr[right]){
          temp.push_back(arr[left]);
          left++;
      }
      else
      {
          temp.push_back(arr[right]);
          right++;
      }
  }
  while(left<=mid)  //Still if the element are left, this while loop will handle those cases
  {
       temp.push_back(arr[left]);
       left++;
  }
  while(right<=high) //Still if the element are left, this while loop will handle those cases
  {
        temp.push_back(arr[right]);
        right++;

  }

  for(int i=low;i<=high;i++) //Putting the temp array element in the main array
  {
      arr[i] = temp[i-low];  //Ex - temp[low-low] -> temp[0] 
  }                          //     temp[low+1-low] -> temp[1]
 }

void mS(vector<int> & arr, int low, int high) //Main function to divide
{
  if(low>=high) return;
  int mid = low+(high-low)/2;
  mS(arr,low,mid);
  mS(arr,mid+1,high);
  merge(arr,low,mid,high);
}

void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    mS(arr,0,n-1);
}
