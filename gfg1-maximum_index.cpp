int maxIndexDiff(int arr[], int n) 
{ 
    int i,j,c;
    int m=0;
    for(i=n-1;i>0;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            if(arr[i] >= arr[j])
            {
                c= i-j;
                if(c>m)
                {
                    m=c;
                }       
            }
        }
    }
    return m;
    
}
