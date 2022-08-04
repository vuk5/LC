class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int leftmax=0;
        int rightmax=0;
        int i=0,j=height.size()-1;
        while(i<=j){
            if(height[i]<=height[j]){
                if(height[i]>leftmax)leftmax=height[i];
                else res+=leftmax-height[i];
                i++;
            }
            else{
                if(height[j]>rightmax)rightmax=height[j];
                else res+=rightmax-height[j];
                j--;
            }
        }
        return res;
    }
};