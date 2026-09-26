class Solution:
    def heightChecker(self, heights: list[int]) -> int:
        new = sorted(heights)
        i = j= 0
        count = 0
        for i in range(len(heights)):
            if new[i] != heights[i]:
                count += 1
            
        return count

