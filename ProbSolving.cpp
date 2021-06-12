#include <iostream>
#include<vector>
#include<array>
#include<algorithm>
#include<unordered_set>
#include<unordered_map>
using namespace std;

#include"Merge.h"
#include"MergeInterval.h"
#include"nextPermutation.h"

int getPairsCount(int arr[], int n, int k) {
    
    unordered_map<int, int>map;
    for (int i = 0; i < n; i++) {
        map[arr[i]] ++;
    }

    int twice_count=0;
    
    for (int i = 0; i < n; i++) {
        twice_count += map[k - arr[i]];

        // if (arr[i], arr[i]) pair satisfies the condition,
        // then we need to ensure that the count is
        // decreased by one such that the (arr[i], arr[i])
        // pair is not considered
        if (k - arr[i] == arr[i])
            twice_count--;
    }

    // return the half of twice_count
    return twice_count / 2;

}

int main()
{
    int arr[] = { 1,1 };
    int count=getPairsCount(arr, 2, 2);
    cout << count;
}
