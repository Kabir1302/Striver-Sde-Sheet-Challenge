int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    
    int platform=1,departed=0;
    for(int i=1;i<n;i++)
    {
        if(at[i]>dt[departed])
        {
            departed++;
        }
        else
        {
            platform++;
        }
    }
    return platform;
}
