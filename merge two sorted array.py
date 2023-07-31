# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        '''new node called head made'''
        head=ListNode()  
        '''pointer named current made'''
        current=head               
        '''this loop says that while list1 and list2 both are not none'''
        while list1 and list2:      
            if list1.val<list2.val:
                current.next=list1      
                list1=list1.next
                current=current.next
            else:
                current.next=list2
                list2=list2.next
                current=current.next  
        '''Alternate solution to following block of code{current.next=list1 or list2} means when list 1 or list 2 any of them is not none''' 
        if list1!=None:             
            current.next=list1
        else:
            current.next=list2
        return head.next
            
       