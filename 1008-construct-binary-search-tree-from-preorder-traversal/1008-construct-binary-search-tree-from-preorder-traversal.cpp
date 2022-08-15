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
    TreeNode* build(vector<int>&A,int& i,int bound){
        if(i==A.size() or A[i]>bound)return NULL;
        TreeNode* root=new TreeNode(A[i++]);
        root->left=build(A,i,root->val);     //for left part the bound is root->val
        root->right=build(A,i,bound);        //for right part the bound is upperbound of that particular node
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& A) {
        int i=0;
        return build(A,i,INT_MAX);
    }
};