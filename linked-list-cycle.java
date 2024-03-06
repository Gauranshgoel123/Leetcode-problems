/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
//  Approach
// The approach used in the given code is known as Floyd's Tortoise and Hare algorithm, which is a cycle detection algorithm for linked lists. Here's a step-by-step explanation of the approach:

// 1- Initialization:
// Initialize two pointers, slow and fast, both pointing to the head of the linked list.

// The slow pointer moves one step at a time, and the fast pointer moves two steps at a time.

// 2-Traversal:
// Move both pointers through the linked list until either the fast pointer reaches the end of the list (indicating no cycle) or the slow and fast pointers meet (indicating the presence of a cycle).

// 3-Cycle Detection:
// During the traversal, if there is a cycle, the fast pointer will eventually enter the cycle and start orbiting around it. The slow pointer will also enter the cycle, and since the fast pointer is moving faster, they will meet at some point within the cycle.

// 4- Return Result:
// If the pointers meet (slow == fast), it means there is a cycle, and the function returns true.

// If the fast pointer reaches the end of the list (fast == NULL or fast->next == NULL), it means there is no cycle, and the function returns false.

// Complexity
// Time complexity:0(n)
// Space complexity:0(1)
public class Solution {
    public boolean hasCycle(ListNode head) {

        if(head==null || head.next==null) return false;
        ListNode slow=head;
        ListNode fast=head;
        while(fast.next!=null&&fast.next.next!=null){
            fast=fast.next.next;
            slow=slow.next;
            if(slow==fast){
                return true;
            }
        }    
        return false;    
    }
}
