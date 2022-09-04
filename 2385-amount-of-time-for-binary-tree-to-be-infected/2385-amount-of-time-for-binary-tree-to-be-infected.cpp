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

//SIMILAR TO BURN THE BINARY TREE

class Solution {
    TreeNode* markparents(unordered_map<TreeNode*,TreeNode*>&mp,int start,TreeNode* root){
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* n;
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            if(node->val==start)n=node;
            if(node->left){
                mp[node->left]=node;
                q.push(node->left);
            }
            if(node->right){
                mp[node->right]=node;
                q.push(node->right);
            }
            
        }
        return n;
    }
public:
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*,TreeNode*> mp;
        TreeNode* cur=markparents(mp,start,root);
        map<TreeNode*,bool> vis;
        vis[cur]=true;
        int time=0;
        queue<TreeNode*> q;
        q.push(cur);
        while(!q.empty()){
            int flag=0;
            int s=q.size();
            while(s--){
                TreeNode* node=q.front();
                q.pop();
                if(node->left and !vis[node->left]){
                    flag=1;
                    q.push(node->left);
                    vis[node->left]=true;
                }
                if(node->right and !vis[node->right]){
                    flag=1;
                    q.push(node->right);
                    vis[node->right]=true;
                }
                if(mp[node] and !vis[mp[node]]){
                    flag=1;
                    q.push(mp[node]);
                    vis[mp[node]]=true;
                }
               
               
            }
             if(flag==1)time++;
           
        }
        return time;
    }
};