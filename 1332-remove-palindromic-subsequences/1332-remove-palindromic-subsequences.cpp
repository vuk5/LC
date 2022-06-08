class Solution {
public:
    int removePalindromeSub(string s) {
        string a=s;
        reverse(a.begin(),a.end());
        if(s==a)return 1;
        return 2;
    }
};