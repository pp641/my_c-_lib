#include<bits/stdc++.h>
using namespace std;
void create_graph(vector<int>vec[],int u,int v)
    {
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    void dfsrecur(vector<int>vec[],bool visited[],int s)
            {
                visited[s] = true;
                cout<<s<<" ";
                for(int i : vec[s])
                {
                    if(visited[i] == false)
                    {
                        visited[i] = true;
                        dfsrecur(vec,visited,i);
                    }
                }
            }
  void dfs(vector<int>vec[],int V,int s)
        {
            bool visited[V] = {false};
            visited[s] = true;
            dfsrecur(vec,visited,s);
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
    dfs(vec,4,0);
}
