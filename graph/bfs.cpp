#include<bits/stdc++.h>
using namespace std;
void create_graph(vector<int>vec[],int u,int v)
    {
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
void bfs(vector<int>vec[],int V,int s)
    {
        bool visited[V];
        for(int i=0; i<V; i++)
                visited[i] = false;
        queue<int>q;
        visited[s] = true;
      q.push(s);
      while(q.empty() == false)
      {
          int u = q.front();
          q.pop();
          cout<<u<<" ";
          for(int v : vec[u])
          {
            if(visited[v] == false)
                {
                    visited[v] = true;
                     q.push(v);
                }
          }
      }
    }
using namespace std;
int main()
{

    vector<int>vec[4];

    create_graph(vec,0,0);
    create_graph(vec,0,1);
    create_graph(vec,0,2);
    create_graph(vec,0,3);
    create_graph(vec,1,1);
    create_graph(vec,1,2);
    create_graph(vec,1,3);
    create_graph(vec,2,2);
    create_graph(vec,2,3);
    create_graph(vec,3,3);
    bfs(vec,4,0);
}
