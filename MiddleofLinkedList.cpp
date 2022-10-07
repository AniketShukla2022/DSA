class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if (head->next == NULL)
            return head;
        if (head->next->next == NULL)
            return head->next;
        ListNode* slow = head->next;
        ListNode* fast = head->next->next;
        while (fast!=NULL && fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
