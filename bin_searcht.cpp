#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* insert(TreeNode* root, int val) {
    if (!root) {
        return new TreeNode(val);
    }

    if (val < root->val) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

TreeNode* createBST(int arr[], int n) {
    TreeNode* root = nullptr;
    for (int i = 0; i < n; ++i) {
        root = insert(root, arr[i]);
    }
    return root;
}

void inorderTraversal(TreeNode* root) {
    if (!root) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

int main() {
    int arr[] = {5, 3, 8, 1, 4, 7, 9}; // Your array of elements

    int n = sizeof(arr) / sizeof(arr[0]);
    TreeNode* root = createBST(arr, n);

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    return 0;
}
