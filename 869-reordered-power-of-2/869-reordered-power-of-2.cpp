class Solution {
public:
    string sorted(int n){
        string a=to_string(n);
        sort(a.begin(),a.end());
        return a;
    }
    bool reorderedPowerOf2(int n) {
        string s=sorted(n);
        for(int i=0;i<32;i++){
            if(s==sorted(1<<i))return true;
        }
        return false;
    }
};