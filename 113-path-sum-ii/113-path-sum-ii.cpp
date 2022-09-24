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
    void compute(TreeNode* root,int targetsum,int sum,vector<vector<int>>&ans,vector<int>& temp){
        if(root==NULL)return;
        temp.push_back(root->val);
        sum+=root->val;
        if(root->left==NULL and root->right==NULL){
            
            if(sum==targetsum){
                
                ans.push_back(temp);
                // return;
            }
        }
        
        
        compute(root->left,targetsum,sum,ans,temp);
        compute(root->right,targetsum,sum,ans,temp);
        temp.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        compute(root,targetSum,0,ans,temp);
        return ans;
    }
};