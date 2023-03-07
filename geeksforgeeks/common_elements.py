"""
Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.

The task is to complete the function commonElements() which take the 3 arrays A[], B[], C[] and their
respective sizes n1, n2 and n3 as inputs and returns an array containing the common element present in all the 3 arrays in sorted order. 
If there are no such elements return an empty array.
"""
class Solution:
    def commonElements (self,A, B, C, n1, n2, n3):
        # convert the three arrays into set to find the common element and then convert them back into list.
        # Return the list sorted.
        common_elements = list(set(A).intersection(B, C))
        return sorted(common_elements)