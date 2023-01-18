# Description: You are given two non-empty linked lists representing two non-negative
# integers. The digits are stored in reverse order, and each of their nodes contains a single digit.
# Add the two numbers and return the sum as a linked list.

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(0)
        current = dummy
        carry = 0 # Carry over from the previous sum
        while l1 or l2:  # Iterate until both lists are empty
            x = l1.val if l1 else 0  # If the list is empty, set the value to 0
            y = l2.val if l2 else 0  # If the list is empty, set the value to 0
            sum = carry + x + y  # Sum of the current values and the carry
            carry = sum // 10  # Carry over to the next sum
            current.next = ListNode(sum % 10)  # Add the sum to the linked list
            current = current.next  # Move to the next node
            if l1:  # Move to the next node if the list is not empty
                l1 = l1.next
            if l2:  # Move to the next node if the list is not empty
                l2 = l2.next
        if carry > 0:  # If there is a carry over, add it to the linked list
            current.next = ListNode(carry)  # Add the carry to the linked list
        return dummy.next  # Return the linked list