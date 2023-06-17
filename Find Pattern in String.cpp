#include <bits/stdc++.h> 
bool findPattern(string p, string s)
{
    // Write your code here.
    string ans="NO";
    int k=p.length();
    for(int i=0;i<s.length();i++)
    {
        string temp=s.substr(i,k);
        
        if(temp==p)
        {
            return true;
            break;
        }
    }
    return false;

}
