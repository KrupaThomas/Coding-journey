//dfs in cpp
#include<iostream>
#include<vector>

using namespace std;

void dfs_create(int node, int vis[], vector<int> &lst, vector<vector<int>> &adj)
{
    vis[node] = 1;
    lst.push_back(node);
    for(auto it: adj[node])
    {
        if(!vis[it])
        {
            dfs_create(it,vis,lst,adj);
        }
    }
    
}

vector<int> dfs (int v, vector<vector<int>> adj)
{
    int vis[v] = {0};
    vector<int> lst;
    int start = 0;
    dfs_create(start, vis, lst, adj);
    return lst;
}

int main()
{
    vector<vector<int>> adj = {{1,2},{0,2,3},{0,1},{1}} ;
    int v = 4;

    dfs(v,adj);

    return 0;
}