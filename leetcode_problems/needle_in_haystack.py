class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if needle == "":
            return 0
        if needle in haystack:
            return haystack.index(needle)
        else:
            return -1

    # second solution
    class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if needle in haystack:
            first_index = haystack.index(needle)
            return first_index
        else:
            return -1