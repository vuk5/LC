class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
     int ans=0;
        string temp="";
        for(int i=left;i<=right;i++){
            temp=words[i];
            int n=temp.size()-1;
            if((temp[0]=='a' or temp[0]=='e' or temp[0]=='i' or temp[0]=='o' or temp[0]=='u')  and  (temp[n]=='a' or temp[n]=='e' or temp[n]=='i' or temp[n]=='o' or temp[n]=='u' ))ans++;
        }
        return ans;
    }
};