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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> nodes;        //to store vertical order;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}}) ;                           //(vertical,level);
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            TreeNode* node=p.first;
            int  ver=p.second.first;
            int level=p.second.second;
            nodes[ver][level].insert(node->val);
           if(node->left) q.push({node->left,{ver-1,level+1}});
            if(node->right)q.push({node->right,{ver+1,level+1}});
        }
        vector<vector<int>> ans;
        for(auto it:nodes){
            vector<int> col;
            for(auto it1:it.second){
                col.insert(col.end(),it1.second.begin(),it1.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};