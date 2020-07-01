#include<bits/stdc++.h>
using namespace std;
int getsum(int arr[] , int n , int l, int r)
    {
        int prearr[n];
        in
    }
int search(int arr[],int n ,int x)
{
    for(int i = 0; i<n ;i++)
    {

        if(arr[i] == x)
                return i;

    }
    return -1;
}
void reverse(int arr[],int n)
{
int low = 0;
int high =  n-1;
while(low < high)
{
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
    low++;
    high--;
}
}
int deleteduplicate(int arr[],int n)
        {
            int temp[n];
            temp[0]= arr[0];
            int res = 1;
            for(int i = 1 ; i < n ; i++)
                if(arr[i-1] != arr[i])
                       res++;
            return res;
        }
int main()
{
    int *arr1 = new int[48];
    cout<<sizeof(arr1)*48<<endl;
    int  arr[] = {1,2,3,4,6,6,6,6,7,7};
    cout<<deleteduplicate(arr,10)<<endl;
    cout<<search(arr,7,1)<<endl;

    cout<<search(arr,7,1)<<endl;

    cout<<search(arr,7,5);

    cout<<search(arr,7,46);

    cout<<search(arr,7,564)<<endl;
    reverse(arr,7);
    for( int x = 0; x < 7; x++ )
                cout<<arr[x]<<" ";
    return 0;
}
