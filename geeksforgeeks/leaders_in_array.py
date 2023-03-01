class Solution:
    #Function to find the leaders in the array.
    def leaders(self, A, N):
        #Code here
        leaders = []
        max_so_far = A[-1]
        for i in range(N - 2, -1, -1):
            if A[i] >= max_so_far:
                leaders.append(A[i])
                max_so_far = A[i]
        leaders.reverse()
        leaders.append(A[-1])
        return leaders