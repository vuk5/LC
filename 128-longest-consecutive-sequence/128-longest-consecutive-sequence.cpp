class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
       unordered_set<int> s(nums.begin(),nums.end());
        int maxi=INT_MIN;
        int count;
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i]-1)!=0)continue;             //we want to start from element which has no previous
            count=0;
            while(s.count(nums[i])!=0){
                count++;
                nums[i]+=1;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};