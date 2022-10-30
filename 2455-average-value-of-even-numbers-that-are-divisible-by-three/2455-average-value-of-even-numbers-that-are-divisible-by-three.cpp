class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count=0;
        int sum=0;
        int flag=0;
        for(auto it:nums){
            if(it%2==0 and it%3==0){
                count++;
                sum+=it;
                flag=1;
            }
        }
        if(flag==0)return 0;
        return sum/count;
    }
};