class Solution {
public:
    bool f(int n,int k)
{   
    int arr[32];
    int i = 0;
    while (n > 0) {                //convert n to binary with base k
        arr[i] = n % k;
        n = n / k;
        i++;
    }
    // printing binary array in reverse order
    string temp="";
    for (int j = i - 1; j >= 0; j--)
        temp+=arr[j];
    i=0;
    int j=temp.size()-1;
    string s=temp;
    reverse(s.begin(),s.end());
    if(s==temp)                                 //check if it is a palindrome
        return true;
    return false;
        
}
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){                      //check for all bases from 2 to n-2
            if(f(n,i)==false)
                return false;   
        }
        return true;
    }
};