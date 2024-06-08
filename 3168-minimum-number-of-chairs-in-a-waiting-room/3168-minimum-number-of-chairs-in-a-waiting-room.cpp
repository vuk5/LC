class Solution {
public:
    int minimumChairs(string s) {
        int maxcount=0,temp=0;
        for(auto it:s){
            if(it=='E')
            {
                temp++;
                
            }
            else if(it=='L')
            {
                temp--;
            }
            maxcount=max(maxcount,temp);
        }
        return maxcount;
    }
};