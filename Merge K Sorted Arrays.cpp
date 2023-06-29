#include <bits/stdc++.h> 
vector<int>merge(vector<int>arr1,vector<int>arr2)
{
    int i=0,j=0,k=0;
    vector<int>temp;
    
    while(i<arr1.size() && j<arr2.size())
    {
        if(arr1[i]<arr2[j])
        {
            temp.push_back(arr1[i]);
            i++;
        }
        else
        {
            temp.push_back(arr2[j]);
            j++;
        }
    }
    while(i<arr1.size())
    {
        temp.push_back(arr1[i]);
        i++;
    }
    while(j<arr2.size())
    {
        temp.push_back(arr2[j]);
        j++;
    }
    return temp;
}
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    vector<int>v1;
    for(int i=0;i<k;i++)
    {
        v1=merge(v1,kArrays[i]);
    }
    return v1;
}



// #include <bits/stdc++.h> 
// vector<int>solve(vector<int>& arr,vector<int>& res)
// {
//     for(int i=0;i<arr.size();i++)
//     {
//         res.push_back(arr[i]);
//     }
//     return res;
// }
// vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
// {
//     // Write your code here. 
//     vector<int>res;
//     int n=kArrays.size();
//     for(int i=0;i<n;i++)
//     {
//         res=solve(kArrays[i],res);
//     }
//     sort(res.begin(),res.end());
//     return res;
// }
