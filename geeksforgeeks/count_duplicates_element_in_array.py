"""
Given an array of integers, the task is to print all the elements that appear more than once in the array.
"""
class Solution:
    def duplicates(self, arr, n):
        if len(arr) == len(set(arr)):  # if no duplicates, return [-1]
            return [-1]
        counts = {}  # dictionary to store counts of each element
        for i in arr:
            if i in counts:  # if element already in dictionary, increment count
                counts[i] += 1
            else:  # if element not in dictionary, add it with count 1
                counts[i] = 1
        duplicates = [i for i in counts if counts[i] > 1]  # list comprehension to get elements with count > 1
        return sorted(duplicates)  # return sorted list of duplicates