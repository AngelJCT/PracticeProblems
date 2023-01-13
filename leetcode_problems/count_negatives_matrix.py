# count negatives integers in matrix
class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        negatives = 0

        for row in grid:
            for num in row:
                if num < 0:
                    negatives += 1
        return negatives
