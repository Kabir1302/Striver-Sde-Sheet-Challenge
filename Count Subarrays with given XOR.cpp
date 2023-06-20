#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int n=arr.size();
    int curr;
    int k=0;
    for(int i=0;i<n;i++)
    {
        curr=arr[i];
        if(curr==x)
          k++;

        for(int j=i+1;j<n;j++)
        {
            curr=curr^arr[j];
            if(curr==x)
            {
                k++;
            }
        }
    }
    return k;
}
