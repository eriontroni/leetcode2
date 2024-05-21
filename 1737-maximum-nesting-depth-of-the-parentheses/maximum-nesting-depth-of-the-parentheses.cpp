class Solution {
public:
    int maxDepth(string s) {
    int lbracket = 0;
    int max = 0;
    for(int i = 0; i < s.size() ; i++ ){
        if(s[i] == '('){
            lbracket++;
        }
        if(s[i] == ')'){

            if(lbracket > max){
            max = lbracket;
            }
            lbracket--;
        }
    }
    
    return max;
    }
};