#include <bits/stdc++.h> 
vector<int> bitwiseAnd(int n, int q, vector<int> arr, vector<int> queries)
{
    //Write your code here.
    vector<int> ans;
    for (int i=0; i<q; i++) {
        int topush=0;
        int num = arr[0];
        for (int j=0; j<n; j++) {
            num = num&arr[j];
            if (num >= queries[i]) {
                topush = j+1;
            }
        }
        ans.push_back(topush);
    }
    return ans;
}

// https://www.codingninjas.com/codestudio/contests/love-babbar-contest-ii/3583551/problems/14871?leftPanelTab=0
