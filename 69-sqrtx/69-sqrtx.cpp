class Solution {
public:
    int mySqrt(int x) {
        if(x==0)return 0;
        long low=1,high=x;
        long ans=1;
        while(low<=high){
           long mid=(low+high)/2;
            if(mid*mid<=x){
                ans=mid;
                low=mid+1;
            }
            else if(mid*mid>x)high=mid-1;
            
        }
        return ans;
        
    }
};