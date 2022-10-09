class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL)
            return head;
        if (head->next == NULL)
            return NULL;
        ListNode* slow = head->next;
        ListNode* fast = head->next->next;
        int flag = 0;
        while (fast!=NULL && fast->next!=NULL) {
            if (slow == fast) {
                flag = 1;
                break;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        if (flag == 0)
            return NULL;
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};
