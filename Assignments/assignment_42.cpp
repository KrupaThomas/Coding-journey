//Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the 
//nodes you can see ordered from top to bottom

#include<iostream>
#include<vector>

using namespace std;

struct Treenode{
    int data;
    Treenode* left;
    Treenode* right;
    Treenode(int x) : data(x), left(NULL), right(NULL){};
};

class Solution{
    public:
    void recur_right(Treenode* root,int level,vector<int>&ds)
    {
        if(root == NULL)
        {
            return;

        }
        if(ds.size() == level)
        {
            ds.push_back(root->data);
        }
        recur_right(root->right,level+1,ds);
        recur_right(root->left,level+1,ds);

    }

    vector<int> right_view (Treenode* root)
    {
        vector<int> ds;
        recur_right(root,0,ds);
        return ds;
    }
};

Treenode* create_tree(Treenode *root)
{
    int data;
    cout<<"Enter data (-1 to stop) : "<<endl;
    cin>>data;

    if(data == -1)
        return NULL;
    
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
    root = create_tree(root);

    Solution sol;
    vector<int> ans = sol.right_view(root);

    for(auto i : ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;



    return 0;
}