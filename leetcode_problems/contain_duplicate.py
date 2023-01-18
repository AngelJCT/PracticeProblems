class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        sorted_nums = sorted(nums)  #sort the list
        if len(sorted_nums) < 2:  #if the list is less than 2 elements, there can't be any duplicates
            return False
        for i in range(len(sorted_nums) - 1):  #iterate through the list until the second to last element
            if sorted_nums[i] == sorted_nums[i + 1]:  #if the current element is equal to the next element
                return True
        return False