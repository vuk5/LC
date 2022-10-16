class Solution {
    int reverse(int n){
        int num=0;
        while(n){
            int r=n%10;
            num=num*10+r;
            n/=10;
        }
        return num;
    }
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(reverse(nums[i]));
        }
        set<int> s(nums.begin(),nums.end());
        return s.size();
    }
};