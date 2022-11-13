class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<float> s;
       sort(nums.begin(),nums.end());
        
        
        int i=0,j=nums.size()-1;
        while(i<=j){
            s.insert(((float)nums[i]+(float)nums[j])/2.0);
            i++;j--;
        }
        return s.size();
    }
};