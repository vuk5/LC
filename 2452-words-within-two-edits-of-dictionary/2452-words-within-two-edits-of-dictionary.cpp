class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dict) {
        vector<string> ans;
        for(int i=0;i<queries.size();i++){
            
            string a=queries[i];
           // cout<<a;
            for(int j=0;j<dict.size();j++){
                string b=dict[j];
                //cout<<b;
                int count=0;
                for(int k=0;k<b.size();k++){
                    if(b[k]-a[k]!=0)count++;
                    //if(count>3)break;
                    
                   }
                //cout<<count;
                if(count<=2){
                        ans.push_back(a);
                      break;
                       
                }
            }
        }
            return ans;
    }
};