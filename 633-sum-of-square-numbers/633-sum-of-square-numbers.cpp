class Solution {
public:
    bool judgeSquareSum(int c) {
        int low=0,high=sqrt(c)+1;
        int mid;
        while(low<=high){
            mid=((low+high)/2);
            if(pow(low,2)+pow(high,2)==c) return true;
            else if(pow(low,2)+pow(high,2)>c) high--;
            else low++;
           
            // else if(pow(mid,2)<c)low=mid;
            // else high=mid;
            
        
        }
        
        return false;
    }
};