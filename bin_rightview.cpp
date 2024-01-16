#include<iostream>
#include<vector>

using namespace std;

struct Treenode
{
    int data;
    Treenode* left;
    Treenode* right;

    Treenode(int x) : data(x), left(NULL), right(NULL){};
};

class Solution
{
    public:

    void right_recursion(Treenode* root, int level, vector<int> &ds)
    {
        if(root == NULL)
            return;

        if(level == ds.size())
        {
            ds.push_back(root->data);
        }

        right_recursion(root->right,level+1,ds);
        right_recursion(root->left,level+1,ds);

    }

    vector<int> right_view(Treenode *root)
    {
        vector<int> ds;
        right_recursion(root,0,ds);
        return ds;
    }

};

Treenode* create_tree(Treenode *root)
{
    int data;
    cout<<"Enter data (-1) to stop : "<<endl;
    cin>>data;

    if(data == -1)
    {
        return NULL;
    }

    root = new Treenode(data);

    cout<<"Enter left child of "<<root->data<<" : "<<endl;
    root->left = create_tree(root->left);

    cout<<"Enter right child of "<<root->data<<" : "<<endl;
    root->right = create_tree(root->right);

    return root;
}

int main()
{
    Treenode *root;
    create_tree(root);

    Solution sol;

    vector<int> ans = sol.right_view(root);

    for(auto i : ans)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    return 0;
}