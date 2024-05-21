class Solution {
public:
    int maxDepth(string s) {
    int size = s.size();
    int lbracket = 0;
    int max = 0;
    for(int i = 0; i < size ; i++ ){
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