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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // Dummy node to make result list creation easier
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        int carry = 0;

        // Continue while either list has nodes OR carry remains
        while (l1 != nullptr || l2 != nullptr || carry != 0) {

            int sum = carry;

            // Add value from l1
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            // Add value from l2
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            // Calculate carry
            carry = sum / 10;

            // Put only the digit in the new node
            curr->next = new ListNode(sum % 10);

            curr = curr->next;
        }

        // Dummy node is not part of the answer
        return dummy->next;
    }
};