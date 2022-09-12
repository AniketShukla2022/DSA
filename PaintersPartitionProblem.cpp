bool isPoss(vector<int> &boards, int n, int k, int mid) {
    int painters = 1;
    int blocks = 0;
    for (int i=0; i<n; i++) {
        if (blocks+boards[i] <= mid) {
            blocks += boards[i];
        }
        else {
            painters++;
            if (painters > k || boards[i] > mid)
                return false;
            blocks = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int n = boards.size();
    int start = 0;
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += boards[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start+(end-start)/2;
    while (start<=end) {
        if (isPoss(boards,n,k,mid)) {
            ans = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
