#pragma once

/*  Question : Given two sorted arrays arr1[] of size N
    and arr2[] of size M. Each array is sorted in non-decreasing
    order. Merge the two arrays into one sorted array in 
    non-decreasing order without using any extra space.
*/


int getGap(int gap) {
    if (gap <= 1)return 0;
    return ceil(gap / 2);
}

void merge(int arr1[], int arr2[], int n, int m) {
    int gap = n + m;
    int i = 0, j = 0;
    for (gap = getGap(gap); gap > 0; gap = getGap(gap)) {

        for (i = 0; (i + gap) < n; i++) {
            if (arr1[i] > arr1[i + gap])swap(arr1[i], arr1[i + gap]);
        }

        for (j = gap > n ? gap - n : 0; i < n && j < m; i++, j++) {
            if (arr1[i] > arr2[j]) {
                swap(arr1[i], arr2[j]);
            }
        }

        if (j < m) {
            for (j = 0; j + gap < m; j++) {
                if (arr2[j] > arr2[j + gap]) {
                    swap(arr2[j], arr2[j + gap]);
                }
            }
        }
    }
}