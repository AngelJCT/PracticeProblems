# Description: Given an array of integers, return indices of the two numbers such that
# they add up to a specific target.
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if nums[i] + nums[j] == target:
                    return i, j

# Optimized solution using a hash table
# Use of hash table to store the values and their indices, and then check for the complement of
# the current value in the hash table. This would reduce the time complexity from O(n^2) to O(n).
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash_table = {}  # Store the values and their indices
        for i, num in enumerate(nums):  # Enumerate returns the index and the value
            complement = target - num  # Complement of the current value
            if complement in hash_table:  # Check if the complement is in the hash table
                return [hash_table[complement], i]  # Return the indices of the complement and the current value
            hash_table[num] = i  # Add the current value and its index to the hash table