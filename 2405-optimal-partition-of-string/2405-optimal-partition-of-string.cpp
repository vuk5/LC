class Solution {
public:
    int partitionString(string s) {
        if(s.size()==1)return 1;
        set<char> st;
        int count=1;
        for(auto it:s){
            if(st.find(it)==st.end()){
                st.insert(it);
            }
           else{ count++;
            st.clear();
            st.insert(it);
               }
        }
        return count;
    }
};