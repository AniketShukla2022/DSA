class Solution {
    private List<Integer> solve(TreeNode root, List<Integer> ans) {
        if (root == null)
            return ans;
        ans.add(root.val);
        solve(root.left,ans);
        solve(root.right,ans);
        return ans;
    }
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> ans = new ArrayList<>();
        return solve(root,ans);
    }
}
