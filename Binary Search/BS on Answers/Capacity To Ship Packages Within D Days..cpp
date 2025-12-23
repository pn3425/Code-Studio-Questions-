#include<bits/stdc++.h>

// Approach : Using BS -> TC : O(log2 (sum - max) + 1) * O(n) 

int finddays(vector<int> &weights, int capacity){   // TC -> O(n)
    int days = 1, load = 0;
    for(int i=0;i<weights.size();i++){
        if(weights[i] + load > capacity){ // Check if the capacity exceeds
            days = days + 1; //Move to next day
            load = weights[i]; // Load the weight
        }
        else{
            load = load + weights[i]; // Keep adding the weights
        }
    }
    return days;
}

int leastWeightCapacity(vector<int> &weights, int d) // TC -> O(log2 (sum - max) + 1)
{
    // The Range is known (Between Highest element and Sum of all weights present in vector)

    int low = *max_element(weights.begin(), weights.end()); // The highest element of vector
    int high = accumulate(weights.begin(), weights.end(),0); // Sum of weights present in vector

    // Now Apply BS
    while( low <= high){
        int mid = (low + high) / 2;
        int reqdays = finddays(weights, mid);
        if(reqdays <= d){ // So it is an possibility
            high = mid - 1;  // Hence Trim RH and come to LH, since we want least possible ANS (Day)
        }
        else
        {
            low = mid + 1; // But if the element is too small go RIGHT
        }
    }
    return low; // Opposite Polarity Concept (Low started with not possible ended up being the ans, High started with possible ended up being not the answer)
}
