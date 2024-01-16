#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int> bfs_traversal(int v, vector<vector<int>>&adj)
{
    int vis[v+1] = {0};
    vis[1] = 1;
    queue<int> q;
    q.push(1);
    vector<int>bfs;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }

    return bfs;
}

int main()
{
    vector<vector<int>> adj = {{},{2,3},{1,4},{1,4,5},{2,3,5},{3,4}};
    int v = 5, e = 6;

    vector<int> ans = bfs_traversal(v,adj);

    for(auto it : ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}