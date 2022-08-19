class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int n=num.size();
        int cur=k;
        int i=n-1;
        while(i>=0 or cur){
           if(i>=0)
                cur+=num[i];
            ans.push_back(cur%10);
            cur/=10;
            i-=1;
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
};