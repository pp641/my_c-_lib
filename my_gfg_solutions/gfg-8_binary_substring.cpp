#include<bits/stdc++.h>
using namespace std;



long binarySubstring(int n, string a)
{
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == '1')
            count++;
    }
    return ((count)*(count-1)/2);
}



int main()
{
    int t,n,count;
    string a;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin >> n;
        cin >> a;
        
        cout << binarySubstring(n, a) << endl;
    }
}
 
