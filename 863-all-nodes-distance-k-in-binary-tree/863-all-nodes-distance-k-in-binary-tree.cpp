/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    void markparents(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&mp){
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            TreeNode* node=qu.front();
            qu.pop();
            if(node->left)
            {
                mp[node->left]=node;
                qu.push(node->left);
            }
            if(node->right){
                mp[node->right]=node;
                qu.push(node->right);
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
       unordered_map<TreeNode*,TreeNode*> mp;
        markparents(root,mp);
        unordered_map<TreeNode*,bool> vis;  //visited map 
        queue<TreeNode*> q;
        q.push(target);
       vis[target]=true;
         int d=0;
        while(!q.empty()){
            int s=q.size();
          if(d++ ==k)break;
            while(s--){
                 TreeNode*node=q.front();
                 q.pop();
                if(node->left and !vis[node->left])
                {
                    q.push(node->left);
                    vis[node->left]=true;
                }
                if(node->right and !vis[node->right]){
                    q.push(node->right);
                    vis[node->right]=true;
                }
                if(mp[node] and !vis[mp[node]]){
                    q.push(mp[node]);
                    vis[mp[node]]=true;
                }
            }
            
        }
        vector<int> res;
        while(!q.empty()){
          TreeNode* cr=q.front();
            q.pop();
            res.push_back(cr->val);
        }
        return res;
    }
};

