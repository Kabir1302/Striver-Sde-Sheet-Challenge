int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int j=1;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			arr[j++]=arr[i+1];
		}
	}
	return j;
}
