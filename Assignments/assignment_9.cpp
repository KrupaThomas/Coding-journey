#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root) 
            return NULL;

        int curr = root->val;

        if (curr < p->val && curr < q->val)
            return lowestCommonAncestor(root->right, p, q);

        if (curr > p->val && curr > q->val)
            return lowestCommonAncestor(root->left, p, q);

        return root;
    }
};

TreeNode* create_tree(TreeNode* root) {
    int data;
    cout << "Enter data (-1 to stop): ";
    cin >> data;
    if (data == -1) {
        return nullptr;
    }
    root = new TreeNode(data);
    
    cout << "Enter left child of " << data << " : ";
    root->left = create_tree(root->left);

    cout << "Enter right child of " << data << " : ";
    root->right = create_tree(root->right);

    return root;
}

int main() {
    Solution solution;

    TreeNode* root = nullptr;
    root = create_tree(root);

    int data1, data2;
    cout<<"Enter value of p (node 1)"<<endl;
    cin>>data1;

    cout<<"Enter value of q (node 2)"<<endl;
    cin>>data2;

    TreeNode* p = new TreeNode(data1); 
    TreeNode* q = new TreeNode(data2); 

    TreeNode* lca = solution.lowestCommonAncestor(root, p, q);
    if (lca)
        cout << "Lowest Common Ancestor: " << lca->val << endl;
    else
        cout << "One or both nodes not found." << endl;

    return 0;
}
