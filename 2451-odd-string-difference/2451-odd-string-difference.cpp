
class Solution {
public:
    string oddString(vector<string>& words) {
//         unordered_map<string,vector<int>> mp;
//         //cout<<words[0][2]-words[0][1];
//         int n=words.size();
        
//         int count1=0,count2=0;
//         string string1="";
//         string string2="";
//         vector<int> diff,diff1;
//         for(int i=0;i<words.size();i++){
//             vector<int> temp;
//             string a=words[i];
//             for(int j=1;j<words[i].size();j++){
                
//                 temp.push_back(a[j]-a[j-1]);
//             }
//             if(diff.empty()==true)diff=temp;
//             else if(temp!=diff and diff1.empty()==true)diff1=temp;
            
//         }
        
//          for(int i=0;i<words.size();i++){
//             vector<int> temp;
//              string a=words[i];
//             for(int j=1;j<words[i].size();j++){
//                 //cout<<a[j]-a[j-1]<<"\n";
//                 temp.push_back(a[j]-a[j-1]);
//             }
//             if(temp==diff){
//                 count1++;
//                 string1=a;
                
//             }
//              else if(temp==diff1){
//                  count2++;
//                  string2=a;
//              }
            
//         }
//         if(count1==1)return string1;
//         return string2;
        
        
        
        map<vector<int>,int> mp;
        for(int i=0;i<words.size();i++){
            string a=words[i];
            vector<int> diff;
            for(int j=1;j<a.size();j++){
                diff.push_back(a[j]-a[j-1]);
            }
            mp[diff]++;
        }
        vector<int> ans;
        for(auto it:mp){
            if(it.second==1){
                ans=it.first;
                break;
            }
        }
         for(int i=0;i<words.size();i++){
            string a=words[i];
            vector<int> diff;
            for(int j=1;j<a.size();j++){
                diff.push_back(a[j]-a[j-1]);
            }
            if(diff==ans)return a;
        }
        
        return "";

    }
};