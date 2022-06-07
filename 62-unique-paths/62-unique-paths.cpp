class Solution {
    // int f(int m,int n,vector<vector<int>> &ans){
    //     if(m==0 and n==0)return 1;
    //     if(m<0 or n<0)return 0;
    //     if(ans[m][n]!=-1)return ans[m][n];
    //     int top=f(m-1,n,ans);
    //     int left=f(m,n-1,ans);
    //     return ans[m][n]=top+left;
    // }
public:
    int uniquePaths(int m, int n) {
        vector<int> prev(n,0);
        
        for(int i=0;i<m;i++){
            vector<int> temp(n,0);
            for(int j=0;j<n;j++){
                if(i==0 and j==0)temp[j]=1;
                else{
                int top=0;
                int left=0;
                if(i>0)top=prev[j];
                if(j>0)left=temp[j-1];
                    temp[j]=top+left;
            }
            }
            prev=temp;
        }
       return prev[n-1]; 
    }
};







































// //unique paths to reach from top left to bottom right
// //TC=O(N),SC=O(1)
// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         int N=n+m-2;                //among N there are r combinations NCr
//         int r=m-1;
//         double res=1;
//         for(int i=1;i<=r;i++){
//             res=res*(N-r+i)/i;         //calculating combinations
//         }
//         return (int)res;
        
        
//     }
// };