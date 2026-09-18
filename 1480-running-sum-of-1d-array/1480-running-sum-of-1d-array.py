class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        total = 0
        res = []

        for i in nums:
            total = total+i
            res.append(total)

        return res