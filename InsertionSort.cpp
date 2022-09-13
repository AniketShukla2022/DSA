void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for (int i=1; i<n; i++) {
        int j = i;
        while (arr[j-1] > arr[j]) {
            int curr = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = curr;
            j--;
        }
    }
}
