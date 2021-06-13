#pragma once
bool subArrayExists(int arr[], int n)
{
    unordered_set<int>s;        //set used for hashing
    int prefixSum = 0;

    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];
        if (prefixSum == 0 || s.find(prefixSum) != s.end()) { //*
            return true;
        }
        s.insert(prefixSum);
    }

    return false;
}

/*
*If a prefix sum repeats it indicates that the total sum in between the repeating prefix sums including the index where it has repeated is 0 which in turn means array from index after the first occurrence of the repeating prefix
sum till now is 0 in total sum.
*/
