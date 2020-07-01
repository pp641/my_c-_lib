int main()
{
    
    int t,j;
    cin>>t;
    int a[t];
    int i;
    for(i=0;i<t;i++)
    {
        int n,k;
        cin>>n;
        int arr[n];
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        cin>>k;
        sort(arr,arr+n);
        a[i]=arr[k-1];
    }
    for(i=0;i<t;i++)
    {
        cout<<a[i]<<endl;
    }
	return 0;
}
