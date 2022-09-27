void merge(vector<int>& arr, int s, int e) {
    int mid = (s+e)/2;
    int l1 = mid-s+1;
    int l2 = e-mid;
    int* left = new int[l1];
    int* right = new int[l2];
    int arridx = s;
    for (int i=0; i<l1; i++) {
        left[i]=arr[arridx++];
    }
    arridx = mid+1;
    for (int i=0; i<l2; i++) {
        right[i]=arr[arridx++];
    }
    int le = 0;
    int re = 0;
    arridx = s;
    while (le<l1 && re<l2) {
        if (left[le]<=right[re]) {
            arr[arridx++]=left[le++];
        }
        else {
            arr[arridx++]=right[re++];
        }
    }
    while (le<l1) {
        arr[arridx++]=left[le++];
    }
    while (re<l2) {
        arr[arridx++]=right[re++];
    }
    delete []left;
    delete []right;
}
void domergeSort(vector<int>& arr, int s, int e) {
    if (s>=e)
        return;
    int mid = (s+e)/2;
    domergeSort(arr,s,mid);
    domergeSort(arr,mid+1,e);
    merge(arr,s,e);
}
void mergeSort(vector<int>& arr, int n) {
    domergeSort(arr,0,n-1);
}
