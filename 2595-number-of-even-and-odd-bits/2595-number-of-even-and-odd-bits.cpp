class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even=0,odd=0;
        int flag=0;
        while(n){
            //cout<<n<<" ";
            if(n&1==1 and flag==0){
                even++;
                
            }
            else if(n&1==1 and flag==1){
                cout<<n;
                odd++;
                
            }
            flag=!flag;
            n=n>>1;
        }
        return {even,odd};
    }
};