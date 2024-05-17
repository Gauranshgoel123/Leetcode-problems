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

/*To code this, what the condition could be is:

if root is null, then we can't do anything. But if root is not null, then

Remove it's all left leaf nodes (recursively)
Do the same for right
Now, the case is lets say the left leaf node is equal to target and the right one also equal to target, both deleted. Now it itself also equals to target, then we going to remove itself too.

If this not the case, then simply return the root.
*/

class Solution {
    public TreeNode removeLeafNodes(TreeNode root, int target) {
        if(root == null) return null;
        root.left = removeLeafNodes(root.left, target);
        root.right = removeLeafNodes(root.right, target);
        if(root.left == null && root.right == null && root.val == target) return null;
        return root;
    }
}
