int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int i=0,j=0;
    int zero=0;
    int ans=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        while(zero>k)
        {
            if(arr[j]==0)
            {
                zero--;
            }
            j++;
        }
        ans=max(ans,i-j+1);
    }
    return ans;
}
