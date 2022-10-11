class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) 
            return list2;
        if (list2 == NULL)
            return list1;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* ans = new ListNode(0);
        ListNode* temp = ans;
        while (temp1 != NULL && temp2 != NULL) {
            if (temp1->val > temp2->val) {
                temp->next = temp2;
                temp = temp->next;
                temp2 = temp2->next;
            }
            else {
                temp->next = temp1;
                temp = temp->next;
                temp1 = temp1->next;
            }
        }
        while (temp1 != NULL) {
            temp->next = temp1;
            temp = temp->next;
            temp1 = temp1->next;
        }
        while (temp2 != NULL) {
            temp->next = temp2;
            temp = temp->next;
            temp2 = temp2->next;
        }
        return ans->next;
    }
};
