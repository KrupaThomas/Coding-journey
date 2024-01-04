//Given the root of a binary tree, determine if it is a valid binary search tree (BST).

#include<iostream>
#include<climits>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL){};

};

class Solution{
    public: 
    bool isValidBST(TreeNode* root, long minval, long maxval)
    {
        if(root == NULL)
        {
            return true;
        }
        if(root->val > maxval && root->val < minval)
        {
            return false;
        }
        return isValidBST(root->left,minval,root->val) && isValidBST(root->right,root->val,maxval);
    }
};

TreeNode* create_Tree(TreeNode* root)
{
    int data;
    cout<<"Enter data : "<<endl;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    root = new TreeNode(data);

    cout<<"Left child of "<<root->val<<" : "<<endl;
    root->left = create_Tree(root->left);

    cout<<"Right child of "<<root->val<<" : "<<endl;
    root->right = create_Tree(root->right);

    return root;


}
int main()
{
    TreeNode* root = NULL;
    root = create_Tree(root);

    Solution solution;

    cout<<"The given tree is BST or not (1/0) : "<<solution.isValidBST(root, LONG_LONG_MIN, LONG_LONG_MAX)<<endl;
    return 0;
}

