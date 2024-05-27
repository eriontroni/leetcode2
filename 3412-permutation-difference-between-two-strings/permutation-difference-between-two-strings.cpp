class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int> hashi;
        int totali = 0;
        for(int i = 0; i < s.size();i++){
            hashi[s[i]] = i;
        }
        for(int i = 0; i < t.size(); i++){
            totali += abs(i - hashi[t[i]]); 
        }
        return totali;
    }
};