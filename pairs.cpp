#include<bits/stdc++.h>
using namespace std;
int main()
{

pair<int,int>p[10];
for(int i=0;i<10;i++)
 {
  p[i] = {i,i+1};
  cout<<p[i].first<<" "<<p[i].second<<" "<<endl;

}

vector< pair<int,int>>v1;
for(int i=0;i<10;i++)
{
    v1.push_back(p[i]);
}
for(auto &i : v1)
        cout<<i.first<<" "<<i.second<<endl;


deque<vector<pair<int,int>>>d;
d = {{{1,2},{3,4},{5,6},{7,8},{9,10} } };

for(auto &i : d)
        for(auto &j : i)
                cout<<j.first<<" "<<j.second<<" "<<endl;

set<int>s;
s={1,2,3,4,5};
for(auto it : s)
        cout<<it<<endl;
for(auto &it : s)
        cout<<it<<endl;
    return 0;

}
