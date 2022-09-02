class Solution {
public:
    int titleToNumber(string s) {
        
        int n=s.size();
        if(n==1){
            int num=s[0]-'A'+1;
            return num;
        }
        int ans=0;
        int len=n;
        for(int i=0;i<n;i++){
            int var=s[i]-'A'+1;
            ans=ans+(pow(26,(len-1))*var);
            len--;
        }
        return ans;
    }
};