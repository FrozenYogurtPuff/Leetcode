/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int sum = 0;
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
        if (l1 == NULL && l2 == NULL && sum == 0)
            return NULL;
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }
        struct ListNode* temp = malloc(sizeof(struct ListNode));
        temp->val = sum % 10;
        sum /= 10;
        temp->next = addTwoNumbers(l1, l2);
        return temp;
}