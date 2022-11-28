class Solution {
public:
    int pivotInteger(int n) {
        vector<int> prefix(n+1);
        prefix.push_back(0);
        for(int i=1;i<=n;i++){
            prefix[i]=prefix[i-1]+i;
        }
        //for(auto it:prefix)cout<<it<<"" ;
        int last=prefix[n];
        for(int i=1;i<=n;i++){
            if(prefix[i]==last-prefix[i-1]){
                return i;
            }
        }
        return -1;
    }
};