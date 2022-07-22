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
    //recursive soln
    // void inorder(TreeNode* node,vector<int>& ds){
    //     if(node==NULL)return;
    //     inorder(node->left,ds);
    //     ds.push_back(node->val);
    //     inorder(node->right,ds);
    // }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ds;
       
        stack<TreeNode*> st;
        TreeNode* node=root;
        while(true){
            if(node!=NULL){
                st.push(node);      //go to left most part
                node=node->left;
            }
            else{
                if(st.empty()==true)break;
                node=st.top();
                st.pop();
                ds.push_back(node->val);   //go to right and continue the process
                node=node->right;
            }
        }
        return ds;
    }
};