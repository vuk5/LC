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
    bool isvalidbst(TreeNode* node,long min,long max){
        if(node==NULL)return true;
        if(node->val >=max or node->val<=min)return false; //if val not in range of max and min return false 
        return isvalidbst(node->left,min,node->val) and isvalidbst(node->right,node->val,max);  //left of bst max is node->val  and right of bst min is node->val
    }

public:
    bool isValidBST(TreeNode* root) {
        return isvalidbst(root,LONG_MIN,LONG_MAX); //initially take min and max
        
    }
};