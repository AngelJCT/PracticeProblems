# Description: Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        num_set = set(nums)  # store all the numbers in a set for O(n) lookup
        longest_seq = 0  # store the longest sequence length
        for num in num_set:  # iterate through the set
            if num - 1 not in num_set:  # if the number is the start of a sequence
                current_num = num  # store the current number
                current_seq = 1  # store the current sequence length
                while current_num + 1 in num_set:  # while the next number in the sequence is in the set
                    current_num += 1  # increment the current number
                    current_seq += 1  # increment the current sequence length
                if current_seq > longest_seq:  # if the current sequence length is greater than the longest sequence length
                    longest_seq = current_seq  # update the longest sequence length
        return longest_seq  # return the longest sequence length