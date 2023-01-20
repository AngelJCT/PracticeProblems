class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        # Solution 1
        # while val in nums:
        #     nums.remove(val)
        # return len(nums)
        
        # Solution 2
        # i = 0
        # while i < len(nums):
        #     if nums[i] == val:
        #         nums.pop(i)
        #     else:
        #         i += 1
        # return len(nums)
        
        # Solution 3
        i = 0
        for j in range(len(nums)):
            if nums[j] != val:
                nums[i] = nums[j]  # This is the key to the solution
                i += 1  # move i forward
        return i