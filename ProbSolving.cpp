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
#include"subArraySum0.h"



int main()
{
    int arr[] = { 4,2,-3,1,6 };
    cout << subArrayExists(arr, sizeof(arr) / sizeof(arr[0]));

}
