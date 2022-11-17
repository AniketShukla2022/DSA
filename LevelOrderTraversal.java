class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<>();
        List<List<Integer>> ans = new ArrayList<>();
        
        if (root == null) 
            return ans;
        
        q.add(root);
        while (!q.isEmpty()) {
            int n = q.size();
            List<Integer> temp = new ArrayList<>();
            for (int i=0; i<n; i++) {
                TreeNode top = q.peek();
                temp.add(top.val);
                if (top.left != null) 
                    q.add(top.left);
                if (top.right != null)
                    q.add(top.right);
                q.poll();
            }
            ans.add(temp);
        }
        return ans;
    }
}
