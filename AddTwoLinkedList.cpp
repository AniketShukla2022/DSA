class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=NULL;
        ListNode* temp=NULL;
        int carry = 0;
        int flag = 0;
        while (l1 != NULL && l2 != NULL) {
            int sum = l1->val + l2->val + carry;
            int rem = sum%10;
            carry = sum/10;
            if (flag == 0) {
                head = new ListNode(rem);
                temp = head;
                flag = 1;
            }
            else {
                temp->next = new ListNode(rem);
                temp = temp->next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != NULL) {
            int sum = l1->val + carry;
            int rem = sum%10;
            carry = sum/10;
            temp->next = new ListNode(rem);
            temp = temp->next;
            l1 = l1->next;
        }
        while (l2 != NULL) {
            int sum = l2->val + carry;
            int rem = sum%10;
            carry = sum/10;
            temp->next = new ListNode(rem);
            temp = temp->next;
            l2 = l2->next;
        }
        if (carry != 0)
            temp->next = new ListNode(carry);
        return head;
    }
};
