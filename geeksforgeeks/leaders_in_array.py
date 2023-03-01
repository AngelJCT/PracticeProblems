class Solution:
    #Function to find the leaders in the array.
    def leaders(self, A, N):
        #Code here
        leaders = [A[-1]]  # add the last element(rightmost element) in the inialization
        max_so_far = A[-1]  # initialize the max_so_far with the last element
        for i in range(N - 2, -1, -1):  # traverse from the right to left from the second last element
            if A[i] >= max_so_far:  # if the current element is greater or equal than the max_so_far
                leaders.append(A[i])  # add the current element to the leaders list
                max_so_far = A[i]  # update the max_so_far
        return leaders[::-1]  # return the leaders list in reverse order