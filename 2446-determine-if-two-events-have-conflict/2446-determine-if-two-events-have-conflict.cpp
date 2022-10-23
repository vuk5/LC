class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        // string a=event1[1];
        // string a1=a.substr(0,2);
        // int ai=stoi(a1);
        // cout<<ai<<" ";
        // string b=event2[0];
        // string b1=b.substr(0,2);
        // int bi=stoi(b1);
        // cout<<bi;
        // if(bi<=ai)return true;
        if(event2[0]<=event1[1] and event2[1]>=event1[0])return true;
    
        
        return false;
    }
};