Node* sortList(Node *head)
{
    int countArray[3]={0};
    Node* temp = head;
    while (temp != NULL) {
        if (temp -> data == 0)
            countArray[0]++;
        else if (temp -> data == 1)
            countArray[1]++;
        else
            countArray[2]++;
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL) {
        while (countArray[0] != 0 && temp != NULL) {
            temp->data = 0;
            temp = temp->next;
            countArray[0]--;
        }
        while (countArray[1] != 0 && temp != NULL) {
            temp->data = 1;
            temp = temp->next;
            countArray[1]--;
        }
        while (countArray[2] != 0 && temp != NULL) {
            temp->data = 2;
            temp = temp->next;
            countArray[2]--;
        }
    }
    return head;
}
