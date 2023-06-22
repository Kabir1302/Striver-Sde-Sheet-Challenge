#include <bits/stdc++.h> 
void solve(vector<int>& v,int index,vector<int>& temp,vector<vector<int>>& res)
{
    if(index>=v.size())
    {
        res.push_back(temp);
        return;
    }
    solve(v,index+1,temp,res);
    temp.push_back(v[index]);
    solve(v,index+1,temp,res);
    temp.pop_back();
}
vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    vector<vector<int>>res;
    vector<int>temp;
    solve(v,0,temp,res);
    return res;
}
