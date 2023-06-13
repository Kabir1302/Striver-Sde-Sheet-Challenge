#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	map<int,int>m1;
	for(int i=0;i<n;i++)
	{
		m1[arr[i]]++;
	}
	int ans=-1;
	for(auto it:m1)
	{
		if(it.second>n/2)
		{
			ans=it.first;
		}
	}
	return ans;
}
