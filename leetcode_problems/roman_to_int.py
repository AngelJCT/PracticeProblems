class Solution:
    def romanToInt(self, s: str) -> int:
        roman_value = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        result = 0
        if s is None or type(s) != str:
            return 0
        for i in range(len(s)):
            curr_val = roman_value[s[i]]
            if i > 0:
                prev_val = roman_value[s[i - 1]]
                if curr_val > prev_val:
                    result -= 2 * prev_val
            result += curr_val
        return result