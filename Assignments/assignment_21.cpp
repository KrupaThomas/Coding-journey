#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

struct Node {
    int val;
    vector<Node*> neighbors;

    Node(int x) : val(x), neighbors() {}
};

Node* dfs(Node* node, unordered_map<int, Node*>& visited) {
    if (node == nullptr) {
        return nullptr;
    }

    if (visited.find(node->val) == visited.end()) {
        Node* copy = new Node(node->val);
        visited[node->val] = copy;

        for (Node* neighbor : node->neighbors) {
            Node* newNeighbor = dfs(neighbor, visited);
            copy->neighbors.push_back(newNeighbor);
        }
    }

    return visited[node->val];
}

Node* cloneGraph(Node* startNode) {
    if (startNode == nullptr) {
        return nullptr;
    }

    unordered_map<int, Node*> visited;
    return dfs(startNode, visited);
}

void printGraph(Node* startNode) {
    if (startNode == nullptr) {
        return;
    }

    unordered_map<Node*, bool> visited;
    queue<Node*> q;
    q.push(startNode);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        if (visited.find(current) != visited.end()) {
            continue; // Skip if already visited
        }

        visited[current] = true;

        cout << "Node " << current->val << " neighbors: ";
        for (Node* neighbor : current->neighbors) {
            cout << neighbor->val << " ";
            q.push(neighbor);
        }
        cout << endl;
    }
}

int main() {
    
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);

    node1->neighbors = {node2, node3};
    node2->neighbors = {node1, node3};
    node3->neighbors = {node1, node2};

    // Clone the graph
    Node* clonedGraph = cloneGraph(node1);

    // Print the original graph
    cout << "Original Graph:" << endl;
    printGraph(node1);

    // Print the cloned graph by traversing using neighbors
    cout << "\nCloned Graph:" << endl;
    printGraph(clonedGraph);

    return 0;
}
