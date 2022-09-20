class Solution {
public:
    int longestContinuousSubstring(string s) {
        if(s.size()==1)return 1;
        int count=1;
        int maxi=INT_MIN;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]+1)count++;
            else count=1;
            maxi=max(maxi,count);
            //cout<<s[i]<<count<<" ";
        }
        return maxi;
    }
};