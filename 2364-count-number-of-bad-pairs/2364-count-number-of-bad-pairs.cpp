class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long tot=0;
        long long n=nums.size();
        tot=(n*(n-1))/2;
        long long good=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            long long diff=i-nums[i];
            if(mp.find(diff)!=mp.end()){
                good+=mp[diff];
                mp[diff]++;
            }
            else
                mp[diff]=1;
        }
        return tot-good;
    }
};