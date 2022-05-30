class Solution {
    bool ispal(string s,int start,int end){
        while(start<end)
        {
            if(s[start++]!=s[end--])return false;
            
        }
        return true;
    }
    void recurse(int ind,string s,vector<string>&temp, vector<vector<string>>&ans){
        if(ind==s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(ispal(s,ind,i)==true){
                temp.push_back(s.substr(ind,i-ind+1)); //substr[pos,len)
                recurse(i+1,s,temp,ans);
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        recurse(0,s,temp,ans);
        return ans;
    }
};