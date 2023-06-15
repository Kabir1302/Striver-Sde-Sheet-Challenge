#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    // Write your code here.
    sort(nums.begin(),nums.end());
    if(nums.empty())
       return 0;

    int cnt=1,maxi=1;
    for(int i=1;i<n;i++)
    {
        if(nums[i]==nums[i-1])
            continue;
        
        if(nums[i]==nums[i-1]+1)
           cnt++;

        else
        {
            maxi=max(maxi,cnt);
            cnt=1;
        }
    }
    return max(maxi,cnt);
}
