class Solution {
public:
    int balancedStringSplit(string s) {
       int ans=0;
        int cl=0;
        for(auto it:s){
            if(it=='L')cl++;
            else cl--;
            if(cl==0)ans++;
        }
        return ans;
    }
};