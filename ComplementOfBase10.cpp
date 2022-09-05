int bitwiseComplement(int n) {
        if (n==0)
            return 1;
        int ans = 0, digit;
        int i = 0;
        while(n>0) {
            if(n&1)
                digit = 0;
            else
                digit = 1;
            ans = ans + pow(2,i)*digit;
            n = n>>1;
            i++;
        }
        return ans;
    }
