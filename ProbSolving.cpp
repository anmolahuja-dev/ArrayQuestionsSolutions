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
#include"getPairsCount.h"
#include"commonElement.h"
#include"rearrangeArray.h"




int main()
{
    vector<int>arr{ -5,-2,5,2,4,7,1,8,0,-8};
    rearrangeArray(arr);
    for (auto it : arr) {
        cout << it<<" , ";
    }
}
