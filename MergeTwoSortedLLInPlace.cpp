class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) 
            return list2;
        if (list2 == NULL)
            return list1;
        ListNode* prev = list1;
        ListNode* next = prev->next;
        ListNode* temp = list2;
        if (prev->val > temp->val) {
            ListNode* toMove = temp;
            temp = temp->next;
            toMove->next = prev;
            next = prev;
            prev = toMove;
            list1 = toMove;
        }
        while (temp != NULL && next != NULL) {
            if (temp->val >= prev->val && temp->val < next->val) {
                ListNode* toMove = temp;
                temp = temp->next;
                prev->next = toMove;
                toMove->next = next;
                prev = toMove;
            }
            else {
                next = next->next;
                prev = prev->next;
            }
        }
        while (temp != NULL) {
            prev->next = temp;
            prev = prev->next;
            temp = temp->next;
        }
        return list1;
    }
};
