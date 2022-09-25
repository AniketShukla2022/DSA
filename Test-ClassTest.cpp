#include <bits/stdc++.h> 
int classTest(int n, vector<int> &a, int k) {
    sort(a.begin(),a.end());
    // 2, 4, 4, 5, 5
    reverse(a.begin(),a.end());
    // 5, 5, 4, 4, 2
    return a[k-1];
}

// https://www.codingninjas.com/codestudio/contests/love-babbar-contest-ii/3583551/problems/14818?leftPanelTab=0
