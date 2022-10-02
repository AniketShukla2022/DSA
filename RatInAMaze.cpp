
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    private:
    bool issafe(vector<vector<int>>& m, int n, vector<vector<int>>& visited, int newx, int newy) {
        if (newx>=0 && newx<=n-1 && newy>=0 && newy<=n-1 && !visited[newx][newy] && m[newx][newy]) 
            return true;
        return false;
    }
    void solve(vector<vector<int>>& m, int n, vector<vector<int>> visited, vector<string>& ans, int x, int y, string path) {
        //base case
        if (x == n-1 && y == n-1) {
            ans.push_back(path);
            return;
        }
        visited[x][y]=1;
        //4 case possible
        // down, left, right, up
        //1. down
        if (issafe(m,n,visited,x+1,y)) {
            path.push_back('D');
            solve(m,n,visited,ans,x+1,y,path);
            path.pop_back();
        }
        //2. left
        if (issafe(m,n,visited,x,y-1)) {
            path.push_back('L');
            solve(m,n,visited,ans,x,y-1,path);
            path.pop_back();
        }
        //3. right
        if (issafe(m,n,visited,x,y+1)) {
            path.push_back('R');
            solve(m,n,visited,ans,x,y+1,path);
            path.pop_back();
        }
        //4. Up
        if (issafe(m,n,visited,x-1,y)) {
            path.push_back('U');
            solve(m,n,visited,ans,x-1,y,path);
            path.pop_back();
        }
        visited[x][y]=0;
    } 
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if (m[0][0] == 0 || m[n-1][n-1] == 0)
            return ans;
        
        vector<vector<int>> visited=m;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                visited[i][j] = 0;
            }
        }
        int srcx = 0;
        int srcy = 0;
        string path = "";
        solve(m,n,visited,ans,srcx,srcy,path);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
