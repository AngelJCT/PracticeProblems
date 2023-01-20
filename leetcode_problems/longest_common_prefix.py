class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        # Solution 1
        # if len(strs) == 0:
        #     return ""
        # elif len(strs) == 1:
        #     return strs[0]
        # else:
        #     prefix = ""
        #     for i in range(len(strs[0])):
        #         for j in range(1, len(strs)):
        #             if i >= len(strs[j]) or strs[j][i] != strs[0][i]:
        #                 return prefix
        #         prefix += strs[0][i]
        #     return prefix
        
        # Solution 2
        if len(strs) == 0:  # If there are no strings, return empty string
            return ""
        elif len(strs) == 1:  # If there is only one string, return that string
            return strs[0]
        else:
            prefix = ""  # Initialize prefix to empty string
            for i in range(len(strs[0])):  # Iterate through the first string
                for j in range(1, len(strs)):  # Iterate through the rest of the strings
                    if i >= len(strs[j]) or strs[j][i] != strs[0][i]:  # If the index is out of bounds or the characters don't match, return the prefix
                        return prefix
                prefix += strs[0][i]  # If the characters match, add the character to the prefix
            return prefix

        """ Solution 3
        list_len = len(strs)
        if list_len == 0:
            return ""
        if list_len == 1:
            return strs[0]
        strs.sort()
        last_index = min(len(strs[0]), len(strs[list_len - 1]))
        i = 0
        while i < last_index and strs[0][i] == strs[list_len - 1][i]:
            i += 1
        pre = strs[0][0:i]
        return pre """