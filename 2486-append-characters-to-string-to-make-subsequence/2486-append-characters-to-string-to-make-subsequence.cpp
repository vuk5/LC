class Solution {
public:
    int appendCharacters(string s, string t) {
       int ss=s.size();
        int ts=t.size();
        int i=0;int j=0;
        int ans=0;
        while(i<ss and j<ts){
            if(s[i]==t[j]){
                i++;j++;
            }
            else {i++;
                
            }
        }
        ans=ts-j;
        return ans;
    }
};