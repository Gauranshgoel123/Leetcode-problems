/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if (headA == null || headB == null) return null;
        ListNode a=headA;
        ListNode b=headB;
        while(a!=b){
            // if(a==null){
            //     a=headB;
            // }
            // if(b==null){
            //     b=headA;
            // }
            // a=a.next;
            // b=b.next;

            //this wont work coz you are moving the ptrs again and again even 
            //if the ptr is reset to the beginning of the second linked list
            a=(a==null)?headB:a.next;
            b=(b==null)?headA:b.next;
        }
        return a;
    }
}
