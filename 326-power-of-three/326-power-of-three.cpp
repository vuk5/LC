class Solution {
public:
    bool isPowerOfThree(int n) {
        // 1162261467 is 3^19,  3^20 is bigger than int  

         //   return ( n>0 &&  1162261467%n==0);
         while(n>0 and n%3==0)
         {
             n/=3;
         }
        return n==1;
    }
};