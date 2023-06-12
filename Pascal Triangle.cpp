#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>>res;
  for(int i=1;i<=n;i++)
  {
    vector<long long int>row;
    for(int j=0;j<i;j++)
    {
      if(j==0 || j==i-1)
      {
        row.push_back(1);
      }
      else
      {
        row.push_back(res[i-2][j]+res[i-2][j-1]);
      }
    }
    res.push_back(row);
  }
  return res;
}
