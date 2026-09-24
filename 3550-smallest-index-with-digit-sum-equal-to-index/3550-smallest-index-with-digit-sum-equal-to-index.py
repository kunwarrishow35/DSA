class Solution:

    def addition(self, x):
        summation = 0
        while x > 0:
            digit = x%10
            summation = summation+digit
            x = x//10
        return summation
    def smallestIndex(self, nums: List[int]) -> int:
        for i in range(len(nums)):
            summation = self.addition(nums[i])
            if summation == i:
                return i
                break
        return -1