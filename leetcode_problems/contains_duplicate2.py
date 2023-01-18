# Problem: Contains Duplicate II
# Description: Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j]
# and the absolute difference between i and j is at most k.
class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        if len(nums) == len(set(nums)):  # if there are no duplicates
            return False
        else:
            for i in range(len(nums)):  # for each element in nums
                for j in range(i + 1, len(nums)):  # for each element after i
                    if nums[i] == nums[j] and abs(i - j) <= k: # if the elements are equal and the distance is less than k
                        return True
            return False