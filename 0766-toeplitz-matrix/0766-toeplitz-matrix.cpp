class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        map <int,int> mp;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                //if(i-j==0){
                    mp[i-j]=matrix[i][j];
                //}
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                //if(abs(i-j)==0){
                    if(mp[i-j]!=matrix[i][j])return false;
                //}
            }
        }
        return true;
        
    }
};