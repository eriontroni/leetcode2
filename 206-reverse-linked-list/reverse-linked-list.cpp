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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* nextNode = nullptr;

        
        while (current != nullptr) {
            // Store the next node to prevent loss of reference
            nextNode = current->next;
            // Reverse the link
            current->next = prev;
            // Move prev and current pointers one step forward
            prev = current;
            current = nextNode;
        }

        // 'prev' now points to the new head of the reversed list
        return prev;
    }
};