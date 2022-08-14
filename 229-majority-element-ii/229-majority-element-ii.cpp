class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1=INT_MIN,num2=INT_MIN,c1=0,c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num1)c1++;
            else if(nums[i]==num2)c2++;
            else if(c1==0){
                num1=nums[i];
                c1=1;
            }
            else if(c2==0){
                num2=nums[i];
                c2=1;
            }
            else{
                c1--;
                c2--;
            }
        }
        vector<int> ans;
        int count1=0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num1)count1++;
        }
         for(int i=0;i<nums.size();i++){
            if(nums[i]==num2)count2++;
        }
        if(count1>(nums.size())/3)ans.push_back(num1);
        if(count2>(nums.size())/3)ans.push_back(num2);
        return ans;
    }
};