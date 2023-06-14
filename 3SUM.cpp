#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	sort(arr.begin(),arr.end());
	set<vector<int>>s;
	vector<vector<int>>ans;
	for(int i=0;i<n;i++)
	{
		int j=i+1;
		int k=n-1;
		while(j<k)
		{
			int sum=arr[i]+arr[j]+arr[k];
			if(sum==K)
			{
				s.insert({arr[i],arr[j],arr[k]});
				j++;
				k--;
			}
			else if(sum<K)
			{
				j++;
			}
			else
			{
				k--;
			}
		}
	}
	for(auto t:s)
	{
		ans.push_back(t);

	}
	return ans;
}
