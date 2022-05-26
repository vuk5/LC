class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0){
            n=n&(n-1);  //drops the lowest set bit like 011->010
            count++;
        }
        return count;
        
    }
};