int binarySearch(vector<int>& nums, int s, int e, int k) {
        int start = s;
        int end = e;
        int mid = start + (end-start)/2;
        while (start<=end) {
            if (nums[mid] == k)
                return mid;
            else if (nums[mid] > k) {
                end = mid-1;
            }
            else {
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return -1;
    }

int findPivot(vector<int>& nums, int n) {
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while (start<end) {
        if (nums[mid] >= nums[0]) 
            start = mid+1;
        else 
            end = mid;
        mid = start + (end-start)/2;
    }
    return start;
}

int findPosition(vector<int>& nums, int n, int k)
{
    int pivot = findPivot(nums, n);
    if (k >= nums[pivot] && k <= nums[n-1])
        binarySearch(nums,pivot,n-1,k);
    else
        binarySearch(nums,0,pivot-1,k);
}

