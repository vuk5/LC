class Solution {
    void recurse(int ind,int n,int k,vector<int>&ds,vector<vector<int>> &ans){
        if(ds.size()==k){
            if(n==0)
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<=9;i++){
            if(i<=n)
            {ds.push_back(i);
            recurse(i+1,n-i,k,ds,ans);
            ds.pop_back();
            
            }
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        recurse(1,n,k,ds,ans);
        return ans;
    }
};