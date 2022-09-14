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
    int res=0;
    unordered_map<int,int> mp;
public:
    void f(TreeNode* root){
        if(root==NULL)return;
        mp[root->val]++;
        if(root->left==NULL and root->right==NULL){
            int odd=0;
            for(auto it:mp){
                if(it.second%2==1)odd++;
            }
            if(odd<=1)res++;
        }
        f(root->left);
        f(root->right);
        mp[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        f(root);
        return res;
    }
};