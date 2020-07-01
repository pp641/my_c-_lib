
int main()
{
    long long int n,t,j,i;
    cin>>t;
    for(j=0;j<t;j++)
{
    cin>>n;
    long long int fib[n];
    fib[0]=1;
    fib[1]=1;
    for(i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }

     for(i=0;i<n;i++)
    {
        cout<<fib[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}
