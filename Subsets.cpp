void solve(vector<int>& nums, int index, vector<int> currList, vector<vector<int>>& ans) {
        if (index >= nums.size()) {
            ans.push_back(currList);
            return;
        }
        //exclude arr[index]
        solve(nums,index+1,currList,ans);
        //include arr[index]
        currList.push_back(nums[index]);
        solve(nums,index+1,currList,ans);
    }

vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> currList;
        vector<vector<int>> ans;
        int index = 0;
        solve(nums,0,currList,ans);
        return ans;
    }
