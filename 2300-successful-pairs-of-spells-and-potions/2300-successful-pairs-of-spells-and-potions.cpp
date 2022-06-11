class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> ans;
        int n=potions.size();
        for(int i=0;i<spells.size();i++){
            int low=0,high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if((long long)spells[i]*potions[mid]>=success)high=mid-1;
                else low=mid+1;
            }
            ans.push_back(n-low);
            
            
        }
        return ans;
    }
};