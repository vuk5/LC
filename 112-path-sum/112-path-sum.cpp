/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    bool check(TreeNode* root,int targetsum,int sum){
        if(root==NULL)return 0;
        if(root->left==NULL and root->right==NULL){
            sum+=root->val;
            if(sum==targetsum)return true;
        }
        sum+=root->val;
        bool l=check(root->left,targetsum,sum);
        if(l==true)return true;
        bool r=check(root->right,targetsum,sum);
        if(r==true)return true;
        return false;
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        //if(root==NULL)return false;
        if(check(root,targetSum,0))return true;
        return false;
        
    }
};