#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    
    vector<int> ans;
    int i = n-1;
    int j = m-1;
    int carry = 0;
    while (i>=0 && j>=0) {
        int sum = a[i] + b[j] + carry;
        carry = sum/10;
        ans.push_back(sum%10);
        i--;
        j--;
    }
    while (i>=0) {
        int sum = a[i] + carry;
        carry = sum/10;
        ans.push_back(sum%10);
        i--;
    }
    while (j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        ans.push_back(sum%10);
        j--;
    }
    if (carry != 0)
        ans.push_back(carry);
    reverse(ans.begin(),ans.end());
    return ans;
}
