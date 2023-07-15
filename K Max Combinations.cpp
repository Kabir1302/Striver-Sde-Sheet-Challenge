#include <bits/stdc++.h> 
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.
	vector<int>temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			temp.push_back(a[i]+b[j]);
		}
	}
	
	sort(temp.begin(),temp.end());
	vector<int>res;
	int j=temp.size()-1;
	while(k--)
	{
		res.push_back(temp[j]);
		j--;
	}
	cout<<endl;
	return res;
}
