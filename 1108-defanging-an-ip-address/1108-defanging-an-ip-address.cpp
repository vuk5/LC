class Solution {
public:
    string defangIPaddr(string address) {
        string temp="";
        for(auto it:address){
            if(it!='.')temp+=it;
            else{
                temp+="[.]";
                
            }
        }
        return temp;
    }
};