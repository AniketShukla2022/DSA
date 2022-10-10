Node *removeDuplicates(Node *head)
{
    if (head->next == NULL)
        return head;
    unordered_set<int> st;
    st.insert(head->data);
    Node* temp = head->next;
    Node* prev = head;
    while (temp != NULL) {
        if (st.find(temp->data) != st.end()) {
            Node* toPoint = temp->next;
            delete(temp);
            prev->next = toPoint;
            temp = toPoint;
        }
        else {
            st.insert(temp->data);
            temp = temp->next;
            prev = prev->next;
        }
    }
    return head;
}
