/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0), *pre = head, *temp = nullptr;
        int sum = 0;
        while (l1 != nullptr || l2 != nullptr || sum != 0) {
            int a = (l1 == nullptr) ? 0 : l1->val;
            int b = (l2 == nullptr) ? 0 : l2->val;
            sum = a + b + sum;
            temp = new ListNode(sum % 10);
            pre->next = temp;
            pre = temp;
            sum = sum / 10;
            l1 = (l1 != nullptr) ? l1->next : l1;
            l2 = (l2 != nullptr) ? l2->next : l2;
        }
        return head->next;
    }
};
