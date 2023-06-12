#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	map<int,int>m1;
	int ans=-1;
	for(auto it:arr)
	{
		m1[it]++;
	}

	for(auto it:m1)
	{
		if(it.second>1)
		{
			ans=it.first;
		}
	}
	return ans;
}
