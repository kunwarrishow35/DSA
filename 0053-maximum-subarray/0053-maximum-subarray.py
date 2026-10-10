class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        sum = 0
        max = nums[0]
        for i in range(len(nums)):
            sum += nums[i]
            if sum>max:
                max = sum
            if sum<0:
                sum = 0
        return max