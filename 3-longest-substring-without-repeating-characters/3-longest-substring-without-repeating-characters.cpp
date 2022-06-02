class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int n=s.size();
        int i=0,j=0;
        int ans=0;
        while(i<n and j<n){
            if(st.find(s[j])==st.end()){
                st.insert(s[j++]);
                ans =max(ans,j-i);
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        return ans;
        //Another approach using map
        //  vector<int> mp(256, -1);
        // int maxLen = 0, start = -1;
        // for (int i = 0; i != s.length(); i++) {
        //     if (mp[s[i]] > start)
        //         start = mp[s[i]];
        //     mp[s[i]] = i;
        //     maxLen = max(maxLen, i - start);
        // }
        // return maxLen;
    }
};