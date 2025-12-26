/*Approach 1 : Using Linear Search and External Function 
            TC : O(max-min) * O(n)

bool canweplace(vector<int> &stalls, int dist, int cows){
    int cntCows = 1, last = stalls[0];
    for(int i=1; i<stalls.size(); i++){
        if(stalls[i] - last >= dist){
            cntCows++;
            last = stalls[i];
        }

        if(cntCows >= cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    int minPos = stalls[0];
    int maxPos = stalls.back();
    sort(stalls.begin(), stalls.end());
    for(int d=1; d <= maxPos - minPos; d++){
        if(canweplace(stalls,d,k) == true)
            continue;
        else
            return d-1;
    }
    return maxPos - minPos;
}
*/

// Approach 2 : Using BS and External Function (canweplace) - TC -> Nlogn(Sorting) + ( O(log2n) * O(n))
/*Note : 
    1) Refer notes, intution was since 1,2,3 only possible and rest all not possible till 10
    2) We can go for BS
    3) So mid is being passed to the external function for maximum possible minimum distance.
    4) Opposite Polarity concept, where low initially possible -> ends up at impossible
                                    &   high initially impossible -> ends up at possible 
        Understanding based on Dry RUN
*/

bool canweplace(vector<int> &stalls, int dist, int cows){
    int cntCows = 1, last = stalls[0];
    for(int i=1; i<stalls.size(); i++){
        if(stalls[i] - last >= dist){   //Check if the dist between 2 cow is atleast > than dist
            cntCows++;   // If yes, increase count
            last = stalls[i]; // And place the cow/update last
        }

        if(cntCows >= cows) return true; //Check if all cows placed or not
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());  //Sorting
    int n = stalls.size();

    int low = 1, high = stalls[n-1] - stalls[0];  // Range for BS 1 -> high
    while(low <= high){
        int mid = (low + high)/2;
        if(canweplace(stalls,mid,k) == true){  //Passing the mid as distance to the function
            low = mid + 1; // Since it is our answer and we want MAX hence move RIGHT, eliminate LEFT SIDE
        }
        else
        {
            high = mid - 1; // Our Answer is too high, hence we eliminate RH
        }
    }
    return high; // Opposite Polarity concept, found based on dry run or we can create ans variable and then return ans
}
