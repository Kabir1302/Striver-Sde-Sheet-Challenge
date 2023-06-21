#include <bits/stdc++.h> 

vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    

    vector<pair<int,int>>v1;
    vector<int>res;

    for(int i=0;i<start.size();i++)
    {
        v1.push_back({end[i],i});
    }
    sort(v1.begin(),v1.end());
    int temp=-1;
    for(int i=0;i<start.size();i++)
    {
        if(temp<start[v1[i].second])
        {
            res.push_back(v1[i].second+1);
            temp=v1[i].first;
        }
    }
    return res;
}
