vector<int> searchRange(vector<int>& arr, int k) {
        int n = arr.size();
        int s =  0;
        int e = n-1;
        int mid = s+(e-s)/2;
        vector<int> ans;
        while (s<=e) {
            if (arr[mid] == k) {
                int i= mid;
                int j = mid;
                while (i>=0) {
                    if (arr[i] != k)
                        break;
                    i--;
                }
                while (j<n) {
                    if (arr[j] != k)
                        break;
                    j++;
                }
                ans.push_back(i+1);
                ans.push_back(j-1);
                return ans;
            }
            else if (arr[mid] < k) {
                s = mid+1;
            }
            else {
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
