#include<iostream>
#include<cmath>

using namespace std;

class node
{
    public :
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

node* create_tree(node* root)
{
    int data;
    cout<<"Enter data : ";
    cin>>data;

    if(data == -1)
        return NULL;
    
    root = new node(data);
    cout<<"Enter left child : "<<endl;
    root->left = create_tree(root->left);
    cout<<"Enter right child : "<<endl;
    root->right = create_tree(root->right);

    return root;
}

int height(node* root)
{
    if(root == NULL)
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    int ans = max(lh,rh) + 1;
    return ans;


}

bool is_balanced(node *root)
{
    if(root == NULL)
        return true;
    
    int lh = height(root->left);
    int rh = height(root->right);
    int ans = abs(lh-rh);
    if(ans <= 1 && is_balanced(root->left) && is_balanced(root->right))
        return true;
    return false;

}

int main()
{
    node* root = NULL;
    root = create_tree(root);

    cout<<"Tree is/is not (1/0) height balanced : "<<is_balanced(root)<<endl;

    return 0;
}