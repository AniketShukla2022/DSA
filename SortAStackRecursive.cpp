#include <bits/stdc++.h> 
void insertSorted(stack<int>& st, int top) {
    if (st.empty() || st.top() < top) {
        st.push(top);
        return;
    }
    int n = st.top();
    st.pop();
    insertSorted(st,top);
    st.push(n);
}
void sortStack(stack<int> &st)
{
	if (st.empty())
        return;
    int top = st.top();
    st.pop();
    sortStack(st);
    insertSorted(st,top);
}
