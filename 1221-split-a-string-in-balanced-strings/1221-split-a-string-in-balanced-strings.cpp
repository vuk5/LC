class Solution {
public:
    int balancedStringSplit(string s) {
        int res=0,cl=0;
        for(auto it:s){
            if(it=='L')cl++;
            else cl--;
            if(cl==0)res++;
        }
        return res;
    }
};