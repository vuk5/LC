class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minproduct=1;
        int maxproduct=1;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)swap(maxproduct,minproduct);
            maxproduct=max((nums[i]*maxproduct),nums[i]);
            minproduct=min((nums[i]*minproduct),nums[i]);
            maxi=max(maxi,maxproduct);
        }
        return maxi;
    }
};