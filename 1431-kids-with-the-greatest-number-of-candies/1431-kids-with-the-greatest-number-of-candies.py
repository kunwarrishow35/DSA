class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        maximum = max(candies)
        res = []
        for c in candies:
            if c+extraCandies>=maximum:
                res.append(True)
            else:
                res.append(False)

        return res