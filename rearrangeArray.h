#pragma once
void rearrangeArray(vector<int>& arr) {
    int i = 0, j = 0, n = arr.size(), temp = 0, k = 0, l = 0;
    //i - for iterating through the array
    //j - to find -ve number and swap them
    //k -  to store the position of next -ve number to come
    //l - to find +ve number and swap them


    while (i < n) {
        //if even indices we find -ve number
        if (i % 2 == 0) {
            while (j < n && arr[j] >= 0) {
                j++;
            }
            if (j >= n)break;
            temp = arr[j];
            while (j > k)       // to ensure we don't overwrite alternate criteria
            {
                arr[j] = arr[j - 1];
                j--;
            }
            k = j + 2;
            arr[j] = temp;
            j++;              //to ensure that we don't compare this element again
        }

        //for positive indices we try to find +ve number
        else {
            while (l < n && arr[l] < 0) {
                l++;
            }
            if (l >= n)break;
            temp = arr[l];
            while (l > j) {     // to ensure we don't count the -ve number and disturb the alternate sequence criteria
                arr[l] = arr[l - 1];
                l--;
            }

            arr[l] = temp;
            l++;            //to ensure that we don't compare this element again
        }
        i++;
    }

}