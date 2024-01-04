//morris traversal of binary tree
//T - O(N)
//S - O(1)

//inorder traversal of binary tree always gives a sorted array

#include<iostream>
#include<vector>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {};
};

int moriss(TreeNode *root,int k)
{
    //vector<int> inorder;
    int count = 0;
    int kthsmallest = -1;
    TreeNode *curr = root;
    while(curr!=NULL)
    {
        if(curr->left == NULL)
        {
            //inorder.push_back(curr->val);
            count++;
            if(count == k)
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
                //inorder.push_back(curr->val);
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
    
    cout<<"Enter left child of : "<<root->val<<endl;
    root->left = create_Tree(root->left);
    cout<<"Enter right child of : "<<root->val<<endl;
    root->right = create_Tree(root->right);

    return root;
}


int main()
{
    int k;
    cout<<"Enter the value of k : "<<endl;
    cin>>k;
    TreeNode* root = NULL;
    root = create_Tree(root);

    int order = moriss(root,k);

    cout<<"kth smallest element in tree is : "<<order<<endl;



    return 0;
}