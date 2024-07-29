class Solution {
public:
    string interpret(string command) {
        
        string s = "";

        for (int ch = 0; ch < command.length(); ch++){
            if( command[ch] == 'G'){
                s += 'G';
            }
            else if(command[ch] == '(' && command[ch+1] == ')'){
                s += 'o';
            }
            else if( command[ch] == '('  && command[ch+3] == ')'){
                s += "al";
            }
        }
        return s;
    }
};