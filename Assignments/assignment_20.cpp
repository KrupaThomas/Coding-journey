//Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to
//right, level by level).

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct TreeNode{
    public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x): val(x), left(NULL), right(NULL){};

};

class Solution{
    public:
    vector<vector<int>>lvl(TreeNode* root)
    {
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int size = q.size();
            vector<int>level;
            int i = 0;
            for(i = 0; i<size; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                level.push_back(node->val);

            }
            ans.push_back(level);
        }
        return ans;
    }
};

TreeNode* create_tree(TreeNode* root)
{
    int data;
    cout<<"Enter data : "<<endl;
    cin>>data;

    if(data == -1)
        return NULL;

    root = new TreeNode(data);
    
    cout<<"Left child data "<<root->val<<" : "<<endl;
    root->left = create_tree(root->left);

    cout<<"Right child data "<<root->val<<" : "<<endl;
    root->right = create_tree(root->right);

    return root;
    
}

int main()
{
    Solution solution;

    TreeNode *root = NULL;
    root = create_tree(root);

    vector<vector<int>> answer = solution.lvl(root);

    for(auto line : answer)
    {
        for(auto element : line)
        {
            cout<<element<<"\t";
        }
        cout<<endl;
    }


    return 0;
}