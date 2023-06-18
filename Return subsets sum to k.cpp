void solve(vector<int>& arr,int index,int k,vector<int>& temp,vector<vector<int>>& res)
{
    if(index>=arr.size())
    {
        if(temp.size()>0)
        {
            for(int i=0;i<temp.size();i++)
            {
                k-=temp[i];
            }
            if(k==0)
            {
                res.push_back(temp);
            }
        }
        return;
    }
    solve(arr,index+1,k,temp,res);
    temp.push_back(arr[index]);
    solve(arr,index+1,k,temp,res);
    temp.pop_back();
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>>res;
    vector<int>temp;
    solve(arr,0,k,temp,res);
    return res;
}
