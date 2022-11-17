/*******************************************************
    Following is the Binary Tree Node class structure.
    class BinaryTreeNode<T> {
      T data;
      BinaryTreeNode<T> left;
      BinaryTreeNode<T> right;
      
      public BinaryTreeNode(T data) {
        this.data = data;
      }
    }
*******************************************************/
import java.util.*;

public class Solution {
    private static void solve(BinaryTreeNode<Integer> root, List<Integer> ansList) {
        if (root == null)
            return;
        if (root.left == null && root.right == null) 
            ansList.add(root.data);
        solve(root.left,ansList);
        solve(root.right,ansList);
        return;
    }
	public static int noOfLeafNodes(BinaryTreeNode<Integer> root) {
        List<Integer> ansList = new ArrayList<>();
        if (root == null)
            return 0;
        solve(root,ansList);
        return ansList.size();
	}
}
