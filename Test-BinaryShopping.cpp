#include <bits/stdc++.h> 
string binaryShopping(string S, int P)
{
    // Write your code here.   
    int n = S.length();
    int count = 0;
    for (int i=n-1; i>=0; i--) {
        if (count==2) 
           break;
        if (S[i]=='1') {
            S[i] = '0';
            count++;
        }
    }
    if (count==2 || count==0)
        return S;
    if (count==1) {
        for (int i=0; i<n; i++) {
            if (S[i]=='0') {
                S[i] = '1';
                return S;
            }
        }
    }
    return S;
}

// https://www.codingninjas.com/codestudio/contests/love-babbar-contest-ii/3583551/problems/15566?leftPanelTab=0
