bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
  // 3 conditions possible:
  // i) if nums is already sorted
  // ii) if nums is rotated and sorted.
  // iii) if nums is rotated and unsorted.
  // logic: compare nums[i] and nums[i+1], in i and ii case, the count will be 1 (0 if all array elements are same)
        for (int i=0; i<n; i++) {
            if (nums[i] > nums[(i+1)%n])
                count++;
        }
        if (count > 1)
            return false;
        return true;
    }
