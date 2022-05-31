class Solution {
    void recurse(int ind,vector<int>&nums,vector<vector<int>>& ans){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);             //swap from 
           
            recurse(ind+1,nums,ans);
            swap(nums[i],nums[ind]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
     
        recurse(0,nums,ans);
        return ans;
    }
};


/*  Another approach using hashing of indexes if it is taken and looping from 0 to n-1 at each recursive call
class Solution {
    void recurse(int ind,vector<int>nums,vector<int>&temp,vector<vector<int>>& ans,int freq[]){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[i]==0){
            temp.push_back(nums[i]);
                freq[i]=1;
            recurse(i+1,nums,temp,ans,freq);
                freq[i]=0;
                temp.pop_back();}
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n=nums.size();
      int freq[n];
        for(int i=0;i<n;i++)freq[i]=0;
        recurse(0,nums,temp,ans,freq);
        return ans;
    }
};
*/