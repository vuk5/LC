class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        for(auto it:nums){
            if(it%2==0)mp[it]++;
        }
        int maxi=INT_MIN;
        int ans=-1;
       for(auto it:mp){
           if(it.second>maxi){
               maxi=it.second;
               ans=it.first;
           }
           
       }
        if(ans==-1)return -1;
        return ans;
    }
};