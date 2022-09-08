int findDuplicate(vector<int> &arr) 
{
    // Write your code here
	int size = arr.size();
    int calSum = 0;
    int realSum = (size*(size+1))/2;
    for (int i=0; i<size; i++) {
        calSum+=arr[i];
    }
    return size-(realSum-calSum);
}
