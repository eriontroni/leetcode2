class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2){
            return n;
        }
        int a = 0;
        int b = 1;
        int c;
        for(int i = 0; i < n; i++){
            c = a+b;
            a = b;
            b = c;
        }
    return b;

    }
};