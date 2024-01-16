//perform topological sort

#include<iostream> 
#include<vector>
#include<stack>

using namespace std;

void dfs(int node, vector<int> &vis, vector<vector<int>> adj,stack<int> &st)
{
    vis[node] = 1;
    for(auto element : adj[node])
    {
        if(!vis[element]) 
        {
            dfs(element,vis,adj,st);
        }
        
    }

    st.push(node);

}

vector<int> topo_sort(int V, vector<vector<int>>adj)
{
    stack<int> st;
    vector<int> vis(V,0);
    for(int i = 0; i < V; i++)
    {
        if(!vis[i])
        {
            dfs(i,vis,adj,st);
        }

    }

    vector<int> ans;
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

int main()
{
    int V = 6; 
    vector<vector<int>> adj(V);// = {{1, 2},{2,4},{3,5}};
    adj[1].push_back(2);
    adj[2].push_back(4);
    adj[3].push_back(5);
    vector<int> result = topo_sort(V,adj);
    for(auto element: result)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    return 0;
}