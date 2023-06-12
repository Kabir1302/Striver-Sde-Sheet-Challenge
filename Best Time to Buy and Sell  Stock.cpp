#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size();
    int maxi=INT_MIN,mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,prices[i]);
        maxi=max(maxi,prices[i]-mini);
    }
    return maxi;
}
