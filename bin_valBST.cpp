#include<iostream>
#include<climits>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL){};
};

class Solution
{
    public:
    bool isValidBST(TreeNode* root, long minval, long maxval)
    {
        if(root == NULL)
            return true;
        if(root->val > maxval || root->val < minval)
            return false;
        return isValidBST(root->left,minval,root->val) && isValidBST(root->right,root->val,maxval);
    }
};

TreeNode* create_tree(TreeNode* root)
{
    int data;
    cout<<"Enter data : "<<endl;
    cin>>data;

    if(data == -1)
    {
        return NULL;
    }

    root = new TreeNode(data);

    cout<<"Left child of "<<root->val<<" : "<<endl;
    root->left = create_tree(root->left);

    cout<<"Right child of "<<root->val<<" : "<<endl;
    root->right = create_tree(root->right);

    return root;


}

int main()
{

    Solution solution;
    TreeNode *root = NULL;
    root = create_tree(root);

    cout<<"The tree is BST or not (1/0) : "<< solution.isValidBST(root, LONG_LONG_MIN, LONG_LONG_MAX);
}