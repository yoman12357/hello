// Runtime: 0 ms
// Memory: 8.4 MB

            int sum = digit1 + digit2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode* newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next;

            int digit2 = (l2 != nullptr) ? l2->val : 0;
            int digit1 = (l1 != nullptr) ? l1->val : 0;
        while (l1 != nullptr || l2 != nullptr || carry != 0) {

        int carry = 0;
        ListNode* tail = dummyHead;
        ListNode* dummyHead = new ListNode(0);
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
public:
class Solution {