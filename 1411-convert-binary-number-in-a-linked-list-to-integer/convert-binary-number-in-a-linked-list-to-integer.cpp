/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     int getDecimalValue(ListNode* head) {
        int result = 0;
        ListNode* current = head;
        vector<int> numrat;
        while (current != nullptr) {
            numrat.push_back(current-> val);
            current = current->next;
        }
        int size = numrat.size();
        for(int i = 0; i < size ; i++){
            if(numrat.at(i) == 1){
            result += pow(2,size - 1 -i);
            }
        }
        return result;
    }
};