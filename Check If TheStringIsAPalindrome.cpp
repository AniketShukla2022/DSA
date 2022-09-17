#include <bits/stdc++.h> 

bool isAlphaNum(char c) {
    if ((c>='a' && c<='z') || (c>='0' && c<='9')) 
        return true;
    return false;
}
bool checkPalindrome(string s)
{
    // Write your code here.
    int n = s.length();
    int i = 0;
    int j = n-1;
    for (int k=0;k<n;k++){
        if (s[k] >= 'A' && s[k] <= 'Z')
            s[k] = s[k]+32;
    }
   // cout<<s<<endl;
    while (i<=j){
        if (!isAlphaNum(s[i])) {
            i++;
            continue;
        }
        if (!isAlphaNum(s[j])) {
            j--;
            continue;
        }
        if (s[i]!=s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
