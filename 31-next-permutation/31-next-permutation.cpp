class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       //algorithm
        //traverse from backward and find the element which is like nums[i]<nums[i+1] let it be k
        //again traverse from backward and find the least greater element than that of k
        //swap both
        //and reverse the remaining array to get the minimum number
        int i,k;
        for( i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1])
                break;
        }
         if(i<0)reverse(nums.begin(),nums.end());
        else{
        for( k=nums.size()-1;k>=0;k--)
        {
            if(nums[k]>nums[i])
                break;
        }
       
             swap(nums[i],nums[k]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};