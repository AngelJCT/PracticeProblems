"""Given an array of size N-1 such that it only contains distinct integers
in the range of 1 to N. Find the missing element."""

# Python3 program to find missing number


class Solution:
    def MissingNumber(self,array,n):
        # code here
        hash_table = [False] * (n + 1)  # Create a hash table of size n+1 with all values as false
        for num in array:
            hash_table[num] = True  # Mark hash_table[num] as true if num is present in the array
        for i in range(1, n + 1):  # Find the first index which is false in the hash table
            if not hash_table[i]:  # Return the index
                return i
        return n + 1  # If all numbers from 1 to n are present in the array, then return n+1
