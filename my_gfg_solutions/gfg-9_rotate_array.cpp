void rotateArr(int arr[], int d, int n)
{
int low = 0;
int high =d-1;
while(low <high)
    {
        int x = arr[low];
        arr[low] = arr[high];
        arr[high] = x;
        
        low++;
        high--;
    }
    
 low = d;
 high =n-1;
while(low <high)
    {
        int x = arr[low];
        arr[low] = arr[high];
        arr[high] = x;
        
        low++;
        high--;
    }


 low = 0;
 high = n-1;
while(low <high)
    {
        int x = arr[low];
        arr[low] = arr[high];
        arr[high] = x;
        
        low++;
        high--;
    }

}
