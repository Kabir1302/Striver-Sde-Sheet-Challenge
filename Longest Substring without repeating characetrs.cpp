#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
    map<char,int>m1;
    int maxi=INT_MIN;
    int i=0,j=0,n=s.size();
    while(j<n)
    {
        m1[s[j]]++;
        if(m1.size()==j-i+1)
        {
            maxi=max(maxi,j-i+1);
        }
        else if(m1.size()<j-i+1)
        {
            while(m1.size()<j-i+1)
            {
                m1[s[i]]--;
                if(m1[s[i]]==0)
                {
                    m1.erase(m1.find(s[i]));
                }
                i++;
            }
        
        }
        j++;
    }
    return maxi;
}
