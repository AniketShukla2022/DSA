#include <bits/stdc++.h> 
void solve(string str, int index, string curr, vector<string>& ans) {
    if (index>=str.length()) {
        if (curr.length()>0)
            ans.push_back(curr);
        return;
    }
    //exclude current char- str[index]
    solve(str,index+1,curr,ans);
    //include current char- str[index]
    curr = curr+str[index];
    solve(str,index+1,curr,ans);
}
vector<string> subsequences(string str){
	
	vector<string> ans;
    solve(str,0,"",ans);
    return ans;
	
}
//link to question:
//https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087?leftPanelTab=0
