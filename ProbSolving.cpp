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

vector <int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int>ans;
    unordered_map<int, int>m;

    for (int i = 0; i < n1; i++) {
        m[A[i]]++;
    }
    for (int i = 0; i < n2; i++) {
        m[B[i]]++;
    }
    for (int i = 0; i < n3; i++) {
        m[C[i]]++;
    }

    auto it = m.begin();
    while (it != m.end()) {
        if (it->second>1) {
            ans.push_back(it->first);
        }
        it++;
    }

    return ans;
}

int main()
{
    int n1 = 3; int A[] = { 1, 2,3 };
    int n2 = 3; int B[] = { 1, 2,3 };
    int n3 = 3; int C[] = { 1, 2,3 };

    vector<int>ans = commonElements(A, B, C, n1, n2, n3);

    for (auto it : ans) {
        cout << it;
    }
}
