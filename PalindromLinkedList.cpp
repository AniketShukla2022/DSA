class Solution {
private:
    ListNode* midNode (ListNode* head) {
        ListNode* slow = head->next;
        ListNode* fast = head->next->next;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
public:
    bool isPalindrome(ListNode* head) {
        if (head->next ==NULL)
            return true;
        if (head->next->next == NULL) {
            if (head->val == head->next->val)
                return true;
            else
                return false;
        }
        ListNode* temp = head;
        ListNode* mid = midNode(temp);
        //reverse ll from mid->next till last
        ListNode* head1 = mid->next;
        ListNode* prev = mid;
        mid->next = NULL;
        ListNode* ptr = head1->next;
        while (ptr != NULL) {
            head1->next = prev;
            prev = head1;
            head1 = ptr;
            ptr = ptr->next;
        }
        head1->next = prev;
        while (head != mid && head1 != mid) {
            if (head->val != head1->val)
                return false;
            head = head->next;
            head1 = head1->next;
        }
        if (head->val != head1->val)
            return false;
        return true;
    }
};
