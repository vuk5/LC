/*Idea is: loop through the string, check if substr(0, i) is palindrome. If it is, recursively call recurse() on the rest of sub string: substr(i+1, length). keep the current palindrome partition so far in the 'temp' argument of recurse(). When reaching the end of string, add current partition in the result.*/
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
            if(ispal(s,ind,i)==true){  //only proceed if it is a palindrome from beginning to that division point
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