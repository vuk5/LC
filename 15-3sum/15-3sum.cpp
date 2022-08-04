class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());        //initially sort
        vector<vector<int>> ans;          //to store ans
        if(nums.size()<=2)return ans;
        for(int i=0;i<nums.size()-2;i++){
            
            //if(i==0 or(i>0 and nums[i]!=nums[i-1])){ //not to take duplicates
                
                int low=i+1,high=nums.size()-1,sum=0-nums[i];
                
                while(low<high){                 //sum is first value, low  is second and high are third values
                    
                    if(nums[low]+nums[high]==sum){
                        
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        ans.push_back(temp);
                        
                        while(low<high and nums[low]==nums[low+1])low++;  //should not take already taken values
                        while(low<high and nums[high]==nums[high-1])high--;
                        
                              low++;
                              high--;
                    }
                              
                    else if(nums[low]+nums[high]<sum)low++;  //increase the value of low
                    else high--;
                }
            //}
            while(i+1<nums.size() and nums[i]==nums[i+1])i++;
        }
        return ans;
    }
};