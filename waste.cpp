#include<iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL){};
};

int morris(TreeNode* root, int k)
{
    int count = 0;
    int kthsmallest = -1;
    TreeNode* curr = root;

    while(curr!=NULL)
    {
        if(curr->left == NULL)
        {
            count++;
            if(count ==k )
            {
                kthsmallest = curr->val;
            }
            curr = curr->right;
        }
        else
        {
            TreeNode *prev = curr->left;
            while(prev->right && prev->right != curr)
            {
                prev = prev->right;
            }
            if(prev->right == NULL)
            {
                prev->right = curr;
                curr = curr->left;
            }
            else
            {
                prev->right = NULL;
                count++;
                if(count == k)
                {
                    kthsmallest = curr->val;
                }
                curr = curr->right;
            }
        }
    }
    return kthsmallest;

}

TreeNode* create_Tree(TreeNode *root)
{
    int data;
    cout<<"Enter data : "<<endl;
    cin>>data;

    if(data == -1)
        return NULL;

    root = new TreeNode(data);

    cout<<"Left child of "<<root->val<<" : "<<endl;
    root->left = create_Tree(root->left);

    cout<<"Right child of "<<root->val<<" : "<<endl;
    root->right = create_Tree(root->right);

    return root;

}
int main()
{
    int k;
    cout<<"Enter value of k : "<<endl;
    cin>>k;

    TreeNode *root = NULL;
    root = create_Tree(root);

    cout<<"Kth smallest element in the BST is : "<<morris(root,k)<<endl;



    return 0;
}