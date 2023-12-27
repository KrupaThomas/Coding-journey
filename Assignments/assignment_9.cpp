
// Given a binary search tree (BST), find the lowest common ancestor (LCA) 

// node of two given nodes in the BST.
// According to the definition of LCA on Wikipedia: “The lowest common 
// ancestor is defined between two nodes p and q as the lowest node in T
// that has both p and q as descendants (where we allow a node to be a
// descendant of itself).”


#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root) return nullptr;

        // If both nodes are on the left subtree
        if (p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left, p, q);

        // If both nodes are on the right subtree
        if (p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right, p, q);

        // Otherwise, the current root is the LCA
        return root;
    }
};

int main() {
    // Example usage
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);

    Solution solution;
    TreeNode* p = root->left;
    TreeNode* q = root->left->right->right;
    TreeNode* lca = solution.lowestCommonAncestor(root, p, q);
    if (lca)
        std::cout << "Lowest Common Ancestor: " << lca->val << std::endl;
    else
        std::cout << "One or both nodes not found." << std::endl;

    return 0;
}
