void selectionSort(vector<int>& arr, int n)
{   
    for (int i=0; i<n-1; i++) {
        int minIdx = i;
        for (int j=i+1; j<n; j++) {
            if (arr[minIdx] > arr[j])
                minIdx = j;
        }
        swap(arr[minIdx],arr[i]);
    }
}
