#pragma once
int getmin(vector<int>& nums, int i) {
    int min = 32767;
    int minno = 0;
    int minidx = -1;
    int j = 0;
    for (j = i + 1; j < nums.size(); j++) {
        if (abs(nums[i] - nums[j]) < min && nums[j] > nums[i]) {
            min = abs(nums[i] - nums[j]);
            minno = nums[j];
            minidx = j;
        }
    }
    return minidx;
}

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i, temp;

    if (n == 1) {
        return;
    }
    if (n == 2) {
        swap(nums[0], nums[1]);
        return;
    }

    if (n > 2) {
        if (nums[n - 1] > nums[n - 2]) {
            swap(nums[n - 1], nums[n - 2]);
        }
        else {
            i = n - 2;
            while (nums[i] >= nums[i + 1]) {
                i--;
                if (i < 0) {
                    sort(nums.begin(), nums.end());
                    return;
                }
            }

            int j = getmin(nums, i);
            swap(nums[i], nums[j]);
            sort(nums.begin() + i + 1, nums.end());
        }
    }
}