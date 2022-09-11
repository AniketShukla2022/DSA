int mySqrt(int x) {
        if (x==1 || x==0) 
            return x;
        int start = 0;
        int end = x;
        int mid = start + (end-start)/2;
        int ans = -1;
        while (start <= end) {
            if (mid == x/mid)
                return mid;
            else if (mid > x/mid) 
                end = mid - 1;
            else {
                start = mid + 1;
                ans = mid;
            }
            mid = start + (end-start)/2;
        }
        return ans ;
    }
