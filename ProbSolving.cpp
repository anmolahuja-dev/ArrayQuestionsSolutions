#include <iostream>
#include<vector>
#include<array>
#include<algorithm>
#include<unordered_set>

using namespace std;

#include"Merge.h"
#include"MergeInterval.h"



int main()
{
    vector<vector<int>>intervals{
        {0,2},{2,3},{4,4},{0,1},{5,7},{4,5},{0,0}
    };
    //cout << intervals.size();
    

    vector<vector<int>>results= MergeInterval(intervals);

    for (int i = 0; i < results.size(); i++) {
        cout << results[i][0] << "," << results[i][1];
        cout << "\n";
    }
}
