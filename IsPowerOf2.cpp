1. 
bool isPowerOfTwo(int n) {
        if(n==0) 
            return false;
        if(n==INT_MIN) 
            return false;
        if(n&(n-1))
            return false;
        return true;
    }

2.
bool isPowerOfTwo(int n) {
        for (int i = 0; i <= 30; i++){
            if(pow(2,i) == n)
                return true;
        }
        return false;
    }
