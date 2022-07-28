class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq1(256,0),freq2(256,0);
        for(int i=0;i<s.size();i++){
            freq1[s[i]-'0']++;
        }
        for(int i=0;i<t.size();i++){
            freq2[t[i]-'0']++;
        }
        for(int i=0;i<freq1.size();i++)
        {
            if(freq1[i]!=freq2[i])return false;
        }
        return true;
    }
};