class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //similar to 3 sum but should take 4 values
        vector<vector<int>> ans;
        if(nums.size()==0)return ans;   //if  no element is present in array
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long int  rem=(long long)target-(long long)nums[i]-(long long)nums[j];
                int low=j+1;
                int high=n-1;
                while(low<high){
                    if(nums[low]+nums[high]<rem)low++;
                    else if(nums[low]+nums[high]>rem)high--;
                    else{
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        ans.push_back(temp);
                        while(low<high and nums[low]==nums[low+1])low++;  //should not take already taken values
                        while(low<high and nums[high]==nums[high-1])high--;
                        low++;high--;
                        
                    }
                }
                while(j+1<n and nums[j]==nums[j+1])j++;
                
            }
            while(i+1<n and nums[i]==nums[i+1])i++;
        }
        return ans;
    }
};