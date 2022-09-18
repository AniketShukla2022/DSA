#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    int j=0;
    for (int i=0; i<mCols; i++) {
        if (i%2==0) {
                while (j<nRows) {
                ans.push_back(arr[j][i]);
                if (j!=nRows-1) {
                j++;
                }
                else {
                    break;
                }
            }
        }
        else {
            while (j>=0) {
                ans.push_back(arr[j][i]);
                if (j!=0)
                    j--;
                else
                    break;
            }
        }
    }
    return ans;
}
