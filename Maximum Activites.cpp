#include<bits/stdc++.h>
bool cmp(pair<int,int>a,pair<int,int>b)
{
    return a.second<b.second;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,int>>v1;
    for(int i=0;i<start.size();i++)
    {
        v1.push_back({start[i],finish[i]});
    }
    sort(v1.begin(),v1.end(),cmp);
    int EndTime=v1[0].second;
    int cnt=1;
    for(int i=1;i<start.size();i++)
    {
        if(v1[i].first>=EndTime)
        {
            cnt++;
            EndTime=v1[i].second;
        }
    }
    return cnt;
}
