class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans=0;
        for(auto it:nums)
            mp[it]++;
        for(auto it:mp){
            int count=it.second;
            ans+=count*(count-1)/2;
        }
        return ans;
    }
};