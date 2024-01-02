#include<iostream>
#include<cmath>

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
        left =  NULL;
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

    cout<<"Enter left child data : ";
    root->left = create_tree(root->left);
    cout<<"Enter right child data : ";
    root->right = create_tree(root->right);

    return root;
    
}

int height(node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+1;
}

int diameter(node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int opt1 = diameter(root->left);
    int opt2 = diameter(root->right);
    int opt3 = height(root->left) + height(root->right) + 1;
    int ans = max(opt1, max(opt2, opt3));
    return ans;
}


int main()
{
    node* root = NULL;
    root = create_tree(root);
    cout<<"height of tree is : "<<height(root)<<endl;;
    cout<<"diameter of tree is : "<<diameter(root)<<endl;

    return 0;
}