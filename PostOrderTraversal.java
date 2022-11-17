class Solution {
    private List<Integer> solve(TreeNode root, List<Integer> ans) {
        if (root == null) 
            return ans;
        solve(root.left,ans);
        solve(root.right,ans);
        ans.add(root.val);
        return ans;
    }
    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> ans = new ArrayList<>();
        return solve(root,ans);
    }
}
