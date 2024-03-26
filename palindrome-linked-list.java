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
class Solution {
    //reverse method
    public ListNode reverse(ListNode head){
        ListNode prev=null;
        ListNode next=null;
        ListNode curr=head;
        while(curr!=null){
            next=curr.next;
            curr.next=prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    public boolean isPalindrome(ListNode head) {
        //find middle of linked list
        ListNode slow=head;
        ListNode fast=head.next;
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        //slow will have the middle pointer

        //reverse 2nd half of linked list
        ListNode rev=reverse(slow.next);

        //check if first half and reversed second half are the same
        slow.next=null; //to completely divide into 2 seperates halves of linked list: first and second
        while(rev!=null){
            if(head.val!=rev.val){
                return false;
            }
            head=head.next;
            rev=rev.next;
        }
        return true;


        
    }
}
