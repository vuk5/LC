class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> row(9),col(9),box(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int a=board[i][j];
                    if(row[i].count(a) or col[j].count(a)  or box[(i/3)*3+j/3].count(a))return false;
                   
                        row[i].insert(a);
                        col[j].insert(a);
                        box[(i/3)*3+j/3].insert(a);
                    
                }
            }
        }
        return true;
    }
};