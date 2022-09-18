bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rowIdx = 0;
        int colIdx = col-1;
        
        while (rowIdx < row && colIdx >= 0) {
            int curr = matrix[rowIdx][colIdx];
            if (curr == target)
                return true;
            if (curr < target) {
                rowIdx++;
            }
            else {
                colIdx--;
            }
        }
        return false;
    }
