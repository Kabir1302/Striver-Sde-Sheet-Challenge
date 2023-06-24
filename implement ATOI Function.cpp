#include <bits/stdc++.h> 
int atoi(string str) {
    // Write your code here.
    int sign=1;
    int res=0;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='-')
        {
            sign =-1;
        }
        if(str[i]-'0'>=0 && str[i]-'0'<=9)
        {
            res=res*10+(str[i]-'0');
        }
    }

    return res*sign;

    
}
