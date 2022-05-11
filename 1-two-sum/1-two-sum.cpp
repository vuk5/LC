//using hashing t.c=O(n),sc=O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()){
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};

//brute force

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };

//two pointer

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans,temp;
//         temp=nums;
//        sort(nums.begin(),nums.end());
//         int i=0;int j=nums.size()-1;
//         int n1,n2;
//         while(i<j){
//             if(nums[i]+nums[j]==target){
//                 n1=nums[i];
//                 n2=nums[j];
               
//                 break;
//             }
//             else if(nums[i]+nums[j]>target)j--;
//         else i++;
//         }
//         for(int i=0;i<temp.size();i++){
//             if(temp[i]==n1)ans.push_back(i);
//             else if(temp[i]==n2)ans.push_back(i);
//         }
//         return ans;
        
        
//     }
// };