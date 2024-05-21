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
    ListNode* middleNode(ListNode* head) {
        ListNode* current = head;
        ListNode* current_her2 = head;

        while ((current_her2 != nullptr) && (current_her2 -> next != nullptr)) {
            current = current -> next;
            current_her2 = current_her2 -> next -> next;
        }

        
        return current;
    }
};