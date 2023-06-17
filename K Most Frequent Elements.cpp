#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    map<int,int>m1;
    priority_queue<pair<int,int>>pq;
    for(auto it:arr)
    {
        m1[it]++;
    }
    vector<int>res;

    for(auto it:m1)
    {
        pq.push({it.second,it.first});
    }

    for(int i=0;i<k;i++)
    {
        res.push_back(pq.top().second);
        pq.pop();
    }
    sort(res.begin(),res.end());
    return res;

}
