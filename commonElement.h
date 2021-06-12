#pragma once
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
        if (it->second > 1) {
            ans.push_back(it->first);
        }
        it++;
    }

    return ans;
}