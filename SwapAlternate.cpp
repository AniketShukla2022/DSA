void swapAlternate(int *arr, int size)
{
    //Write your code here
    if (size<=1)
        return;
    for (int i=0; i<size;) {
        swap(arr[i],arr[i+1]);
        if ((i+2) == size-1)
            break;
        i+=2;
    }
    return;
}
