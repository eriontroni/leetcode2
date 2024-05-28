class Solution {
public:
    bool checkIfPangram(string sentence) {
        string alfabeti = "abcdefghijklmnopqrstuvwxyz";
        unordered_set<int> used;
        for(char ch : sentence){
            used.insert(ch);
        }
        return used.size()== 26;
    }
};