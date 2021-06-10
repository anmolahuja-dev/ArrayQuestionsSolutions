#pragma once

/*
    Given an array of intervals where intervals[i] = [starti, endi],
    merge all overlapping intervals, and return an array of the
    non-overlapping intervals that cover all the intervals in the input.
*/

vector<vector<int>> MergeInterval(vector<vector<int>>& intervals) {
    int i = 0, j = 1, k = 0;
    int n = intervals.size();

    vector<vector<int>>results(n, vector<int>(2, 0));
    sort(intervals.begin(), intervals.end());
    //{0,0}{0,1}
    int upperbound, lowerbound;
    while (i < n && j < n) {
        lowerbound = intervals[i][0];
        upperbound = intervals[i][1];
        while (j < n && (upperbound >= intervals[j][0])) {

            if (upperbound < intervals[j][1]) {
                upperbound = intervals[j][1];
            }
            if (lowerbound > intervals[j][0]) {
                lowerbound = intervals[j][0];

            }
            j++;
        }

        results[k][0] = lowerbound;
        results[k][1] = upperbound;
        k += 1;
        i = j;
        j += 1;
    }

    //to push any remaining pairs
    while (i < n) {
        results[k][0] = intervals[i][0];
        results[k][1] = intervals[i][1];
        k += 1;
        i++;
    }

    //to remove {0,0} from the end of the results array
    k = results.size();
    for (; k > 1; k--) {
        if (results[k - 1][0] == 0 && results[k - 1][1] == 0) {
            results.pop_back();
        }
    }

    return results;
}


/*instead of having problems dealing with result array we can just use
    for(auto interval : intervals) to get access to all the interval
    and to access any element of an interval
    we can get it by {1,3}
    interval[0] that is 1 and interval[1] i.e 3

    also to get the last pushed element in the result vector we can get it by
    result.back()[i] for i =0/1

*/