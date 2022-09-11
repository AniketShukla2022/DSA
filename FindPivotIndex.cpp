int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if (n==1)
            return 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + nums[i];
        }
        int sumsofar = 0;
        for (int i = 0; i < n; i++) {
            int target = sum - nums[i] - sumsofar;
            if (target == sumsofar) 
                return i;
            sumsofar += nums[i];
        }
        return -1;
    }
