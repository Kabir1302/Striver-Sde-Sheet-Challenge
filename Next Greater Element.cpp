#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    
    stack<int>st;
    vector<int>res(n,-1);
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty())
        {
            if(st.top()>arr[i])
            {
                res[i]=st.top();
                break;
            }
            st.pop();
        }
        st.push(arr[i]);
    }
    return res;
}
