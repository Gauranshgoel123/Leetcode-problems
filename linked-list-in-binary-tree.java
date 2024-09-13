/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
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
    public boolean isSubPath(ListNode head, TreeNode root) {
        if (root == null) return false;
        if (checkPath(head, root)) return true;
        return isSubPath(head, root.left) || isSubPath(head, root.right);
    }
    private boolean checkPath(ListNode head, TreeNode root) {
        if (head == null) return true;
        if (root == null || head.val != root.val) return false;
        return checkPath(head.next, root.left) || checkPath(head.next, root.right);
    }
}


// class Solution {
//     public boolean isSubPath(ListNode head, TreeNode root) {
//         return dfs(head,head,root);
//     }
//     private boolean dfs(ListNode head, ListNode curr,TreeNode root){
//         if(curr==null) return true;
//         if(root==null) return false;
//         if(curr.val==root.val) curr=curr.next;
//         else if(head.val==root.val) head=head.next;
//         else curr=head;
//         return dfs(head,curr,root.left)||dfs(head,curr,root.right);
//     }
// }
