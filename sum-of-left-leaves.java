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
    public int sumOfLeftLeaves(TreeNode root) {
       int res=0;
       if(root!=null){
        if(isLeaf(root.left)){
            res+=root.left.val;
        }
        else{
            res+=sumOfLeftLeaves(root.left);
        }
        res+=sumOfLeftLeaves(root.right);
       }
       return res;
    }
    public boolean isLeaf(TreeNode root){
        if(root==null) {
            return false;
        }
        if(root.left==null && root.right==null){
            return true;
        }
        return false;

    }
}
