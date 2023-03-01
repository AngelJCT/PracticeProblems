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