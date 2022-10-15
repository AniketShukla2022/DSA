bool isValidParenthesis(string ex)
{
    stack<char> st;
    int n = ex.length();
    int i = 0;
    while (i<n) {
        if (ex[i] == '(' || ex[i] == '{' || ex[i] == '[') {
            st.push(ex[i]);
        }
        else {
            if (ex[i] == ')' && (st.empty() || st.top() != '('))
                return false;
            else if (ex[i] == '}' && (st.empty() || st.top() != '{'))
                return false;
            else if (ex[i] == ']' && (st.empty() || st.top() != '['))
                return false;
            st.pop();
        }
        i++;
    }
    if (!st.empty())
        return false;
    return true;
}
