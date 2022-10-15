void insertAtbottom(stack<int>& stack, int x) {
    //base case
    if (stack.empty()) {
        stack.push(x);
        return;
    }
    int storeTop = stack.top();
    stack.pop();
    insertAtbottom(stack,x);
    stack.push(storeTop);
}
void reverseStack(stack<int> &stack) {
    if (stack.empty())
        return;
    int top = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtbottom(stack,top);
}
