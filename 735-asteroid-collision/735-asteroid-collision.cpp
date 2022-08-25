class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(ans.empty() or nums[i]>0)
                ans.push_back(nums[i]);
            else{
                while(!ans.empty() and ans.back()>0 and ans.back()<abs(nums[i]))
                    ans.pop_back();
                if(!ans.empty() and ans.back()+nums[i]==0)ans.pop_back();
                else if(ans.empty() or ans.back()<0)
                    ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};