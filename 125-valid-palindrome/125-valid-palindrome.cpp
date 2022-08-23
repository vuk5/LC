class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i]))temp+=tolower(s[i]);
        }
        //for(auto it:temp)cout<<it;
        int i=0,j=temp.size()-1;
        while(i<j){
            if(temp[i]!=temp[j])return false;
            i++;j--;
        }
        return true;
    }
};