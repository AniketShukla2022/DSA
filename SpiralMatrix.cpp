vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> solve;
       
        int k=0,l=0;
        while(k<m && l<n){
            //first row
            for(int i=l;i<n;i++){
                solve.push_back(matrix[k][i]);
            }
            k++;
            //last col
            for(int i=k;i<m;i++){
                solve.push_back(matrix[i][n-1]);
            }
            n--;
            //last row
            if(k<m){
            for(int i=n-1;i>=l;i--){
                solve.push_back(matrix[m-1][i]);
            }
            m--;
            }
            //first col
            if(l<n){
                for(int i=m-1;i>=k;i--){
                    solve.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return solve;
    }
