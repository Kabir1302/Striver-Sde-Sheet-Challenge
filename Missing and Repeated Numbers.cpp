#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int missing=0,repeated=0;
	map<int,int>m1;
	for(auto it:arr)
	{
		m1[it]++;
	}

	for(int i=1;i<=n;i++)
	{
		if(m1[i]>1)
		{
			repeated=i;
		}

		if(m1[i]==0)
		{
			missing=i;
		}
	}
	pair<int,int>p=make_pair(missing,repeated);
	return p;
	
}
