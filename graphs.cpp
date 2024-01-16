//include learning to store graphs in form of matrix and list - adjacency matrix and adjacency list

#include<iostream>
#include<vector>
using namespace std;

//to store graph in matrix

/*vector<vector<int>> store_graph(int n, int m)
{
    vector<vector<int>>graph(n+1,vector<int>(m,0));//m+1 if it is 0 based indexing else we can take just n
    int u , v;
    for(int i = 0; i<m; i++)
    {
        cin>>u>>v;
        graph[u][v] = 1;//in weighted instead of 1 put the weight in case of matrix
        graph[v][u] = 1;

    }
    

    return graph;


}*/ 

vector<vector<int>> store_graph(int n, int m)
{
    vector<vector<int>> adj (n+1);
    int u, v;
    

    for(int i = 0; i < m; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);//for weighted graphs in list use pair<int,int> to store the adjacent node nd weight
        adj[v].push_back(u);//you can commwnt this if in case of directed graph the direction is from u->v
    }

    return adj;

}

int main()
{
    int n,m;
    cout<<"Enter n and m : "<<endl;
    cin>>n>>m;

    vector<vector<int>> ans = store_graph(n,m);

    
    /*for(auto level : ans)
    {
        for(auto element : level)
        {
            cout<<element<<" ";
        }
    
        cout<<endl;
    }*/

    for (int i = 1; i <= n; i++) 
    {
        cout << i << " : ";
        for (auto element : ans[i]) 
        {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}