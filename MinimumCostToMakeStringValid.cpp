#include <bits/stdc++.h> 
int findMinimumCost(string str) {
    
    if (str.length()%2 != 0) 
      return -1;
    stack<char> st;
    int close = 0;
    for (int i=0; i<str.length(); i++) {
        if (str[i] == '{')
            st.push(str[i]);
        else {
            if (!st.empty())
                st.pop();
            else {
               close++; 
            }
        }
    }
    return (close+1)/2 + (st.size()+1)/2;
}
