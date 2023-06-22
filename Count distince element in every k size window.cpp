#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    // Write your code here
    vector<int>res;
	int i=0,j=0,n=arr.size();
    unordered_map<int,int>m1;
    int cnt=0;
    while(j<n)
    {
        m1[arr[j]]++;
        if(j-i+1==k)
        {
            
            res.push_back(m1.size());
            m1[arr[i]]--;
            if(m1[arr[i]]==0)
            {
                m1.erase(arr[i]);
            }
            i++;
        }
        j++;
        

    }
    

    return res;
}
