//Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree

#include<iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL){};
};

class Solution
{
    public: 
    TreeNode* LCA(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if(!root)
            return NULL;
        int curr = root->val;
        if(curr > p->val && curr > q->val)
            return LCA(root->left,p,q);
        if(curr < p->val && curr < q->val)
            return LCA(root->right,p,q);
        return root;
    }
};

TreeNode* create_Tree(TreeNode *root)
{
    int data;
    cout<<"Enter the data : "<<endl;
    cin>>data;

    if(data == -1)
    {
        return NULL;
    }

    root = new TreeNode(data);

    cout<<"Enter left child of "<<root->val<<" : "<<endl;
    root->left = create_Tree(root->left);
    cout<<"Enter right child of "<<root->val<<" : "<<endl;
    root->right = create_Tree(root->right);

    return root;
}
int main()
{
    Solution solution;
    int data1, data2;
    TreeNode* root = NULL;
    root = create_Tree(root);

    cout<<"Enter node 1 : "<<endl;
    cin>>data1;

    cout<<"Enter node 2 : "<<endl;
    cin>>data2;

    TreeNode* p = new TreeNode(data1);
    TreeNode* q = new TreeNode(data2);

    TreeNode *ans = solution.LCA(root,p,q);

    cout<<"LCA is "<<ans->val<<endl;


}
