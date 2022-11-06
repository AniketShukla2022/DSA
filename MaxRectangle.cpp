class Solution{
  
  private:
    vector<int> leftSmaller(int* arr, int n) {
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for (int i=0; i<n; i++) {
            while (st.top() != -1 && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    
    vector<int> rightSmaller(int* arr, int n) {
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for (int i=n-1; i>=0; i--) {
            while (st.top() != -1 && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    
    int largestRectangleArea(int* heights, int n) {
        
        vector<int> left(n);
        left = leftSmaller(heights,n);
        
        vector<int> right(n);
        right = rightSmaller(heights,n);
        
        int maxArea = INT_MIN;
        for (int i=0; i<n; i++) {
            int height = heights[i];
            if (right[i] == -1)
                right[i] = n;
            int width = right[i]-left[i]-1;
            int area = height*width;
            maxArea = max(maxArea,area);
        }
        return maxArea;
    }
    
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        int area = largestRectangleArea(M[0],m);
        for (int i=1; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (M[i][j] != 0) {
                    M[i][j] += M[i-1][j];
                }
                else {
                    M[i][j] = 0;
                }
            }
            area = max(area,largestRectangleArea(M[i],m));
        }
        return area;
    }
};
