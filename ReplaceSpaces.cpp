#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
    int n = str.length();
    for (int i=0; i<str.length(); i++) {
        if (str[i] == ' ') {
            str.replace(str.begin()+i,str.begin()+i+1,"@40");
        }
    }
    return str;
}
