/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean evaluateTree(TreeNode root) {
        //base case
        if(root.val==0 || root.val==1) return root.val==1;
        //recursion
        boolean left=evaluateTree(root.left);
        boolean right=evaluateTree(root.right);
        return root.val==3?(left&&right):(left||right);
    }
}
