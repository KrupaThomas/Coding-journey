#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>

using namespace std;

struct Node{
    int val;
    vector<Node*>neighbors;

    Node(int x) : val(x), neighbors(){};
};

Node* dfs(Node* node, unordered_map<int,Node*>&visited)
{
    if(node == NULL)
        return NULL;
    
    if(visited.find(node->val) == visited.end())
    {
        Node* copy = new Node(node->val);
        visited[node->val] = copy;

        for(Node* neighbor : node->neighbors)
        {
            Node* newNeighbor = dfs(neighbor,visited);
            copy->neighbors.push_back(newNeighbor);
        }
        return visited[node->val];
    }


}
Node* cloneGraph(Node* startNode)
{
    if(startNode == NULL)
        return NULL;

    unordered_map<int,Node*> visited;
        return dfs(startNode, visited);
}

void printGraph(Node* node)
{
    if(node == NULL)
        return;
    
    unordered_map<Node*,bool> visited;
    queue<Node*> q;
    q.push(node);

    while(!q.empty())
    {
        Node* curr = q.front();
        q.pop();

        if(visited.find(curr) != visited.end())
        {
            continue;
        }

        cout<<" Node "<<curr->val<<" neighbors: ";
        for(Node* neighbor : curr->neighbors)
        {
            cout<<neighbor->val;
            q.push(neighbor);
        }
    }



}


int main()
{
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);

    node1->neighbors = {node2,node3};
    node2->neighbors = {node1,node3};
    node3->neighbors = {node1,node2};

    Node* clonedGraph = cloneGraph(node1);

    cout<<"Original Graph"<<endl;
    printGraph(node1);

    cout<<"Cloned Graph"<<endl;
    printGraph(clonedGraph);

    return 0;
}