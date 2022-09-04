int reverse(int x) {
        long long s=0;
        int flag=1;
        if(x==0)
            return 0;
        if(x<0)
            flag=-1;
        x=abs(x);
        
        while(x>0) {
            s = s*10 + x%10;
            x = x/10;
        }
        if(s<=INT_MIN || s>=INT_MAX) {
            return 0;
        }
        return flag*s;
    }
