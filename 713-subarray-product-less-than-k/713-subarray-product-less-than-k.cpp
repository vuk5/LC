class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0 or k==1)return 0;
        int ans=0;
        int res=0;
        int prod=1;
        int left=0;//to indicate start and end of the sliding window
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];
            
            while(prod>=k){
                prod=prod/nums[left];
                left++;
                
            }
            res+=i-left+1;
                
        }
        return res;
        
    }
};