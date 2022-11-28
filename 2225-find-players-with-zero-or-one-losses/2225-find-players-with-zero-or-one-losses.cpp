class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mp;
        for(auto it:matches){
            mp[it[1]]++;
        }
        vector<vector<int>> ans;
        vector<int> first,second;
        set<int> s;
        for(auto it:matches){
            if(mp.find(it[0])==mp.end()){
                s.insert(it[0]);
            }
        }
        for(auto it:s)first.push_back(it);
        for(auto it:mp){
            if(it.second==1)second.push_back(it.first);
        }
        sort(first.begin(),first.end());
        ans.push_back(first);
        ans.push_back(second);
        return ans;
    }
};