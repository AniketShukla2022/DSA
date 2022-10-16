#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans;
    for (int i=n-1; i>=0; i--) {
        if (arr[i] > st.top()) {
            ans.push_back(st.top());
            st.push(arr[i]);
        }
        else {
            while (st.top() >= arr[i]) {
                st.pop();
            }
            ans.push_back(st.top());
            st.push(arr[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
