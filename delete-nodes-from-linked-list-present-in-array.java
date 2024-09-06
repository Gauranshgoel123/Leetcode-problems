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
    public ListNode modifiedList(int[] nums, ListNode head) {
        ListNode ans=new ListNode();
        int max=-1;
        for(int i=0;i<nums.length;i++){
            max=nums[i]>max?nums[i]:max;
        }
        boolean[] freq= new boolean[max+1];
        for(int n:nums){
            freq[n]=true;
        }
        ListNode curr=ans;
        while(head!=null){
            if(head.val >= freq.length || freq[head.val]==false ){
                curr.next=head;
                curr=curr.next;
            }
            head=head.next;
        }
        curr.next=null;
        return ans.next;
    }
}
