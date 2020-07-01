oid print(int mat[][100],int n)
{
    int i,j;
    
    for(i=0;i<n;i++)
    {
     
            if(i %  2 == 0)
            {
                for(j=0;j<n;j++)
                cout<<mat[i][j]<<" ";
            }
            else
            {
                for(j=n-1;j>=0;j--)
                 cout<<mat[i][j]<<" ";
            }
    }
}
