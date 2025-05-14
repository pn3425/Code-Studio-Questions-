#include <bits/stdc++.h>

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){

        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }
        if(i<j){
        swap(arr[i],arr[j]);
    }
    
    }
    swap(arr[low],arr[j]);
    return j;

}


void qs(vector<int> &arr, int low, int high)
{
    if(low<high){
        int pIndex = partition(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
} 

vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    qs(arr,0,arr.size()-1);
    return arr;
}

/* Eg : 4 6 2 5 7 9 1 3
 
    Pivot = 4

ITERATION 1 : 

     while(arr[i] <= pivot && i <= high-1){    4<=4, i++ -> (1)
                                              6<=4 (f) (It goes for next while loop)
            i++;
        }
    
     while(arr[j] > pivot && j >= low+1){   3>=4, (f), hence comes out of while loop
            j--;
        }
     if(i<j){
        swap(arr[i],arr[j]);               swap(arr[1],arr[7])

New Array after 1 iteration : 4 3 2 5 7 9 1 6

Continue till the j crosses i   -> <-

After that swap arr[low] with arr[j], so that you can put your pivot at correct position

*/

/*

1) Choose a pivot element (It can be any, but here we prefer arr[0])
2) Place the Pivot at the correct position
3) On the left of pivot, place element which are smaller than pivot
4) On the right of pivot, place element which are greater than pivot
5) Hence the array is sorted in ascending order
6) It is a divide and conquer algo


*/
