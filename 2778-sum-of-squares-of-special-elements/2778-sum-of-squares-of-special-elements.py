class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        k = len(nums)
        sum = 0
        for i in range(1, k+1):
            if k%i == 0:
                sum += nums[i-1]*nums[i-1]
        return sum
            

        