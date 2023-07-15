#include<bits/stdc++.h>
string reverseString(string &str){
	// Write your code here.

	str+=" ";
	stack<string>st;
	int n=str.size();
	string temp="";

	for(int i=0;i<n;i++)
	{
		if(str[i]!=' ')
		{
			temp+=str[i];
		}
		else
		{
			if(temp!="")
			   st.push(temp);
			temp="";
		}
	}	
	
	string ans="";
	while(!st.empty())
	{
		ans+=st.top()+" ";
		st.pop();
	}

	return ans;
}
