#include <bits/stdc++.h> 
void solve(stack<int>& myStack, int x) {
    //base case
    if (myStack.empty()) {
        myStack.push(x);
        return;
    }
    int storeTop = myStack.top();
    myStack.pop();
    solve(myStack,x);
    myStack.push(storeTop);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,x);
    return myStack;
}
