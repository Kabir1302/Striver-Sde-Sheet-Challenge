#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>>res;
    sort(intervals.begin(),intervals.end());
    int start=intervals[0][0];
    int end=intervals[0][1];
    for(auto interval:intervals)
    {
        if(interval[0]<=end)
        {
            end=max(end,interval[1]);
          
        }
        else
        {
            res.push_back({start,end});
            start=interval[0];
            end=interval[1];
        }
       
    }
    res.push_back({start,end});
    return res;
}
