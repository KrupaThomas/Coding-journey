//There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1 . You are given an 
//array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want 
//to take course ai . Return true if you can finish all courses. Otherwise, return false .

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool courses_pos(int V, vector<pair<int,int>> &prereq)
{
    vector<int> adj[V];
    for(auto it : prereq)
    {
        adj[it.first].push_back(it.second);

    }

    int indegree[V] = {0};
    for(int i = 0; i<V; i++)
    {
        for(auto it : adj[i])
        {
            indegree[it]++;
        }
    }

    queue<int> q;
    for(int i = 0; i<V; i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }

    vector<int> topo;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        topo.push_back(node);

        for(auto it : adj[node])
        {
            indegree[it]--;
            if(indegree[it] == 0)q.push(it);
        }
    }
    if(topo.size() == V) return true;
    return false;
}

int main()
{
    int numCourses;
    vector<pair<int, int>>prereq = {{1,0}};
    cout<<"Enter the number of courses : "<<endl;
    cin>>numCourses;

    

    cout<<"It is/is not (1/0) posiible to the courses : "<<courses_pos(numCourses, prereq)<<endl;

    return 0;
}