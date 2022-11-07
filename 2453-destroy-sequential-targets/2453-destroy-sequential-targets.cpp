class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        unordered_map<int,int> mp;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]%space]++;
            maxi=max(maxi,mp[nums[i]%space]);
        }
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]%space]==maxi)ans=min(ans,nums[i]);
        }
    
        return ans;
    }
};