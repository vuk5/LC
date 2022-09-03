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
    void preorder(TreeNode* root,string temp,vector<string>&ans)
    {  
        if(root->left==NULL and root->right==NULL){
        temp+=to_string(root->val);
        ans.push_back(temp);
        return ;
       }
        temp+=to_string(root->val);
       if(root->left) preorder(root->left,temp,ans);
        //temp.pop_back();
        if(root->right)preorder(root->right,temp,ans);
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        string temp="";
        vector<string> ans;
        preorder(root,temp,ans);
        //for(auto it:ans)cout<<it<<" ";
        int a=0;
        for(int i=0;i<ans.size();i++){
            string t=ans[i];
            int n=t.size();
            int c=0;
            for(int i=0;i<t.size();i++){
                c+=pow(2,n-1)*(t[i]-'0');
                n--;
            }
            a+=c;
        }
        
       return a; 
    }
};