# Problem: Valid Anagram
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # convert the string into a list of characters, then sort them,
        # if two sorted lists are same then they are anagram. 
        return "".join(sorted(s)) == "".join(sorted(t))