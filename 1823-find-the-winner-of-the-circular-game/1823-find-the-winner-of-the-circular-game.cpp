class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        while(q.size()!=1){
            int a=k;
            while(a>1){
                int front=q.front();
                q.pop();
                q.push(front);
                a--;
            }
            q.pop();
        }
        return q.front();
    }
};