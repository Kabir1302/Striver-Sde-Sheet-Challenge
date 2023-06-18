#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
   
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        int t1=target-arr[i];
        for(int j=i+1;j<n;j++)
        {
            int t2=t1-arr[j];
            int k=j+1,l=n-1;
            while(k<l)
            {
                int sum=arr[k]+arr[l];
                if(sum>t2)
                {
                    l--;
                }
                else if(sum<t2)
                {
                    k++;
                }
                else
                {
                    return "Yes";
                }
            }
        }
    }
    return "No";
}
