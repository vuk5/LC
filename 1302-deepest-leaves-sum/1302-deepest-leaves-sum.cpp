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
public:
    int deepestLeavesSum(TreeNode* root) {
       
        queue<TreeNode*> q;
        q.push(root);
        int s;
        while(!q.empty()){
            int size=q.size();
             s=0;
            vector<int> ans;
            while(size--){
            TreeNode* temp=q.front();
            q.pop();
             s+=temp->val;
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
            }
            
        }
        return s;
        
    }
};