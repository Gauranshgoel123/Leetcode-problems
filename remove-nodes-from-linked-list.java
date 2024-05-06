// Method 3: Reverse and Filter Approach (Best)
// 🤔 Intuition:
// We can reverse the given linked list first. Then we traverse the reversed list, keeping nodes whose values are greater than or equal to the previous node's value. After traversing, we reverse the resulting list to obtain the modified linked list.

// 🧠 Approach:
// Reverse the given linked list.
// Initialize a dummy node to hold the result.
// Traverse the reversed list, keeping nodes whose values are greater than or equal to the previous node's value.
// Reverse the resulting list to obtain the modified linked list.
// Return the head of the modified linked list.
// ⚙️ Dry Run:
// Process	Linked List
// Given Linked List	5 -> 2 -> 13 -> 3 -> 8
// Reverse it	8-> 3 -> 13 -> 2 -> 5
// Remove Nodes smaller than Previous nodes	8 -> 13
// Reverse it again	13 -> 8
// 📒 Complexity:
// ⏰ Time complexity: O(n)O(n)O(n), where n is the number of nodes in the linked list. 3 pass.
// 🧺 Space complexity: O(1)O(1)O(1), as no extra space is used apart from a few pointers.

class Solution {
    public ListNode removeNodes(ListNode head) {
        ListNode prev = null, curr = head;
        while (curr != null) {
            ListNode next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        ListNode dummyHead = new ListNode(-1);
        ListNode tempPrev = dummyHead;
        curr = prev;

        while (curr != null) {
            if (curr.val >= tempPrev.val) {
                tempPrev.next = curr;
                tempPrev = curr;
                curr = curr.next;
            } else {
                curr = curr.next;
            }
        }
        tempPrev.next = null;

        ListNode newPrev = null, newCurr = dummyHead.next;
        while (newCurr != null) {
            ListNode next = newCurr.next;
            newCurr.next = newPrev;
            newPrev = newCurr;
            newCurr = next;
        }

        return newPrev;
    }
}
//recursion approach beats 44%
// /**
//  * Definition for singly-linked list.
//  * public class ListNode {
//  *     int val;
//  *     ListNode next;
//  *     ListNode() {}
//  *     ListNode(int val) { this.val = val; }
//  *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
//  * }
//  */
// class Solution {
//     public ListNode removeNodes(ListNode head) {
//         if(head==null) return null;
//         head.next=removeNodes(head.next);
//         return head.next!=null && head.val<head.next.val ? head.next : head;        
//     }
// }




// monotonic stackk approach 20%
//   /**
//  * Definition for singly-linked list.
//  * public class ListNode {
//  *     int val;
//  *     ListNode next;
//  *     ListNode() {}
//  *     ListNode(int val) { this.val = val; }
//  *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
//  * }
//  */
// class Solution {
//     public ListNode removeNodes(ListNode head) {
//         ListNode curr = head;
//         Stack<ListNode> stack = new Stack<>();
//         while(curr!=null){
//             while(!stack.isEmpty() && stack.peek().val < curr.val){
//                 stack.pop();
//             }
//             stack.push(curr);
//             curr=curr.next;
//         }   
//         //now reverse 
//         ListNode nxt=null;
//         while(!stack.isEmpty()){
//             curr=stack.pop();
//             curr.next=nxt;
//             nxt=curr;
//         } 
//         return curr;
//     }
// }




