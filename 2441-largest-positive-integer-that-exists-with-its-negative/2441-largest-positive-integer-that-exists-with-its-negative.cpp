class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int maxi=INT_MIN;
        //set<int> s;
        set<int> s(nums.begin(),nums.end());
        bool flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                if(s.find(nums[i]*-1)!=s.end()){
                    maxi=max(maxi,nums[i]);
                    flag=1;
                }
            }
        }
        if(flag==0)return -1;
        return maxi;
    }
};