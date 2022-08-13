class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
       int rowstart=s[1];
        int rowend=s[4];
        int start=s[0];
        int end=s[3];
        for(int i=start;i<=end;i++){
            
            for(int j=rowstart;j<=rowend;j++){
                string temp="";
                temp+=i;
                temp+=j;
                ans.push_back(temp);
                
            }
        }
        return ans;
    }
};