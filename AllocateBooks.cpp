bool isPoss(vector<int> arr, int n, int m, int mid) {
    int students = 1;
    int pages = 0;
    for (int i=0; i<n; i++) {
        if (pages+arr[i] <= mid) {
            pages += arr[i];
        }
        else {
            students++;
            if (students > m || arr[i] > mid) {
                return false;
            }
            pages = arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int start = 0;
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += arr[i];
    }
    int end = sum;
    int mid = start+(end-start)/2;
    int ans = -1;
    while (start<=end) {
        if (isPoss(arr,n,m,mid)) {
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
