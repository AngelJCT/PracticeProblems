class Solution:
    def nextLargerElement(self,arr,n):
        #code here
        result = [-1] * n  # initialize result array with -1
        stack = []  # initialize stack to keep track of indices
        
        # iterate through array from right to left
        for i in range(n - 1, -1, -1):
            while stack and arr[stack[-1]] <= arr[i]:
                stack.pop()  # pop indices from stack until stack is empty or arr[stack[-1]] > arr[i]
            if stack:
                result[i] = arr[stack[-1]]  # set next greater element to arr[i]
            stack.append(i)  # append current index to stack
        return result


"""
A stack is a data structure that follows the Last-In-First-Out (LIFO) principle. This means that the last element added to the stack is the first one to be removed.

Think of a stack of plates. When you add a plate to the stack, you place it on top of the others. When you remove a plate from the stack, you take it from the top.
The plate that was added last is always the first one to be removed.

In Python, stacks can be easily implemented using lists. You can use the append() method to add an element to the top of the stack and the
pop() method to remove an element from the top of the stack.

In this code, a stack is used to keep track of indices while iterating through an array from right to left. For each element in arr, indices are popped from
stack until an index with a value greater than arr[i] is found or until stack is empty. If such an index is found, its value is set as result[i]. Then, i is appended to stack.
"""