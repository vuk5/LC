class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*')st.push(s[i]);
            else{
                if(!st.empty())st.pop();
            }
        }
        string tempa="";
        while(!st.empty()){
            tempa+=st.top();
            st.pop();
        }
        reverse(tempa.begin(),tempa.end());
        return tempa;
    }
};