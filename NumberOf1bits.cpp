int hammingWeight(uint32_t n) {
        int count = 0;
        while(n!=0) {
            //check the last bit of n. how???
            // binary representation of 1 is 1. So by doing n&1, we can find if last bit is 1 or 0.
            
            if(n&1) {
                count++;
            }
            n = n>>1;
        }
        return count;
    }
