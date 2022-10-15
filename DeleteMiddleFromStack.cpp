#include <bits/stdc++.h> 
void deleteMiddle(stack<int>&inputStack, int N){
    int mid;
    if (N%2 == 0)
        mid = (N+1)/2;
    else
       mid = N/2;
    int count = 0;
    stack<int> popStack;
    while (!inputStack.empty() && count != mid) {
        popStack.push(inputStack.top());
        inputStack.pop();
        count++;
    }
    if (!inputStack.empty()) {
        inputStack.pop();
    }
    while (!popStack.empty()) {
        inputStack.push(popStack.top());
        popStack.pop();
    }
    return;
}
