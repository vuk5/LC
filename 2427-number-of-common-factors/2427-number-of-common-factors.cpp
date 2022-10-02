class Solution {
   
public:
    int commonFactors(int a, int b) {
         int count=0;
        int x=min(a,b);
        for(int i=1;i<=x;i++){
            if(a%i==0 and b%i==0)count++;
        }
        return count;
    }
};