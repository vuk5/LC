class Solution {
    int reverse(int n){
        int num=0;
        while(n){
            int r=n%10;
            num=num*10+r;
            n/=10;
        }
        return num;
    }
public:
    bool sumOfNumberAndReverse(int num) {
        for(int i=0;i<100001;i++){
            if(i+reverse(i)==num)return true;
        }
        return false;
    }
};