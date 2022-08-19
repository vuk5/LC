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
    TreeNode*helper(vector<int>& nums,int start,int end)
    {
        if(start>end)
            return nullptr;
        int mid=(start+end)/2;
        TreeNode*dummy=new TreeNode(nums[mid]);
        dummy->left=helper(nums,start,mid-1);
        dummy->right=helper(nums,mid+1,end);
        return dummy;
        
    }
    
    
    
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
        
    }
};