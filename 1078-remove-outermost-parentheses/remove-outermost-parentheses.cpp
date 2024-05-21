class Solution {
public:
    string removeOuterParentheses(string s) {
        string s1 = "";
        int hapur = 0;
        for(auto i : s){
            if (i == '('){
                hapur++;
                if (hapur > 1){
                    s1.push_back(i);
                }
            }
            else{
                hapur--;
                if (hapur > 0){
                    s1.push_back(i);
                }
            }
        }
        return s1;
    }
};