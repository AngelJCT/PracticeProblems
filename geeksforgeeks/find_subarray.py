# Function to find a continuous sub-array which adds up to a given number.
class Solution:
    def subArraySum(self,arr, n, s): 
        curr_sum = arr[0]
        start = 0
        i = 1
        min_start = 0

        while i <= n:
            while curr_sum > s and start < i-1:
                curr_sum = curr_sum - arr[start]
                start += 1
            if curr_sum == s:
                if start < min_start:
                    min_start = start
                return [start + 1, i]
            if i < n:
                curr_sum = curr_sum + arr[i]
            i += 1
        return [-1]

"""
Initialize the curr_sum variable to the first element of the array arr[0]. This variable will be used to keep track of the current sum of the subarray.

Initialize the start variable to 0. This variable will keep track of the start index of the subarray.

Initialize the i variable to 1. This variable will be used as the loop index to iterate through the array arr.

Initialize the min_start variable to 0. This variable will keep track of the minimum start index of a subarray that adds up to s.

Start a while loop that runs i times, where i is the length of the array arr.

Within the while loop, start another while loop that continues as long as curr_sum is greater than s and start is
less than i-1. Within this inner loop, subtract the current value at start from curr_sum and increment start by 1.

Check if curr_sum is equal to s. If it is, check if start is less than min_start. If so, update min_start to the current
value of start. Return a list [start + 1, i] as the solution, where both start and i have been incremented by 1 to
match the 1-based indexing of the problem statement.

If i is less than n, increment curr_sum by the value of arr[i].

Increment i by 1.

If the while loop completes, return a list [-1] to indicate that no subarray was found that adds up to s.
"""