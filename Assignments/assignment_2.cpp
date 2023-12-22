
// Given the root of a binary tree, return its maximum depth.
// A binary tree's maximum depth is the number of nodes along the

// longest path from the root node down to the farthest leaf node

#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;


    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;

    }

};

node* create_tree(node* root )
{
    int data;
    cout<<"Enter data : ";
    cin>>data;
    root = new node(data);
    if(data == -1)
    {
        return 0;
    }
    cout<<"Enter left child : ";
    root->left = create_tree(root->left);

    cout<<"Enter right child : ";
    root->right = create_tree(root->right);

    return root;

}

int height(node* node)
{
    if(node == NULL)
    {
        return 0;
    }
    int left = height(node->left);
    int right = height(node->right);
    int ans = max(left,right) + 1;
    return ans;
}

int main()
{
    node* root = NULL;
    root = create_tree(root);
    cout<<"depth of tree is : "<<height(root)<<endl;



    return 0;
}
