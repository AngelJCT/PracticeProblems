# Description: Given a sorted array nums, remove the duplicates in-place such
# that each element appear only once and return the new length.
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 0
        for j in range(1, len(nums)):
            if nums[i] != nums[j]:  # If the current element is not equal to the previous element
                i += 1  # move i forward
                nums[i] = nums[j]  # This is the key to the solution
        return i + 1  # i is the index of the last element, so the length is i + 1