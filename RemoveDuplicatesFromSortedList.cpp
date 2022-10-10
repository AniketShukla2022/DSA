class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
            return head;
        if (head->next == NULL)
            return head;
        ListNode* temp = head->next;
        ListNode* prev = head;
        while (temp != NULL) {
            if (temp->val == prev->val) {
                ListNode* toPoint = temp->next;
                delete(temp);
                prev->next = toPoint;
                temp = toPoint;
            }
            else {
                temp = temp->next;
                prev = prev->next;
            }
        }
        return head;
    }
};
