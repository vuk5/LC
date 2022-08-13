class Solution {
public:
    string interpret(string command) {
     string temp="";
        for(int i=0;i<command.size();i++)
        {
            if(command[i]=='G')temp+='G';
            else if(command[i]=='(' and command[i+1]==')'){
                temp+='o';i++;}
            else {
                temp+="al";
                i+=3;}
            
        }
        return temp;
    }
};