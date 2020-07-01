int maxEvenOdd(int arr[], int n) 
{ 
   for(int i=0;i<n;i++)
   {
     if(arr[i]%2 == 0)
              arr[i]=0;
     else
            arr[i]=1;
   }
   int k=1;
   int count=1;
   for(int i=0;i<n-1;i++)
   {
       if( arr[i] != arr[i+1])
          {      count++;
          }
        else
        {
            if(count>k)
                k=count;
            count=1;
        }
     k= max(k,count);
   }
  return k;
} 
