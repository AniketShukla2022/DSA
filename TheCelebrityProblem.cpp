class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int pos = -1;
        for (int i=0; i<n; i++) {
            int flag = 0;
            for (int j=0; j<n; j++) {
                if (M[i][j] == 1) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) 
                pos = i;
        }
        if (pos == -1)
            return -1;
            
        for (int i=0; i<n; i++) {
            if (i!=pos && M[i][pos]==0)
                return -1;
        }
        return pos;
    }
};
