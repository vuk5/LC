class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
         int id=INT_MIN;
        int maxi=INT_MIN;
//         if(logs.size()==1)return logs[0][0];
//         //int a=logs[0][1];
//         for(int i=1;i<logs.size();i++){
//             a=logs[i][1]-logs[i-1][1];
//             if(a>=maxi){
//                 if(a==maxi){
//                     id=min(id,logs[i][0]);
//                 }
//                 else{
//                 maxi=a;
//                 id=logs[i][0];
//                 }
                
//             }
            
//         }
//         return id;
        map<int,int>mp;
        mp[logs[0][0]]=logs[0][1];
        for(int i=1;i<logs.size();i++){
            if(mp.find(logs[i][0])!=mp.end()){
                if(logs[i][1]-logs[i-1][1]>mp[logs[i][0]])mp[logs[i][0]]=logs[i][1]-logs[i-1][1];
            }
           else mp[logs[i][0]]=logs[i][1]-logs[i-1][1];
        }
        // for(auto it:mp){
        //     cout<<it.first<<" "<<it.second<<"\n";
        // }
        for(auto it:mp){
            if(it.second>maxi){
                maxi=it.second;
                id=it.first;
            }
            if(it.second==maxi){
                id=min(it.first,id);
            }
        }
        return id;
    }
};