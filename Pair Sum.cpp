#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   int sum=0;
   vector<vector<int>>res;
   for(int i=0;i<arr.size()-1;i++)
   {
      vector<int>temp;
      for(int j=i+1;j<arr.size();j++)
      {
         if((arr[i]+arr[j])==s)
         {
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            res.push_back(temp);
         }
      }
   }
   sort(res.begin(),res.end());
   return res;
   
}
