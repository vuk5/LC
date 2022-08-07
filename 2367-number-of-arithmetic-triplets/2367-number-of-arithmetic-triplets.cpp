class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int k) {
       set<int> s(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]+k)!=s.end() and s.find(nums[i]+2*k)!=s.end())count++;
        }
        return count;
    }
};