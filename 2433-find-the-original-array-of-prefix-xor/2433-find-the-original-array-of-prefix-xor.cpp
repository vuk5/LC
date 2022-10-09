class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        if(pref.size()==1)return pref;
        ans.push_back(pref[0]);
        int tillxor=pref[0];
        for(int i=1;i<pref.size();i++){
            //cout<<tillxor<<" "<<(tillxor ^pref[i])<<"\n";
            ans.push_back(tillxor^pref[i]);
            tillxor=pref[i];
        }
        return ans;
    }
};