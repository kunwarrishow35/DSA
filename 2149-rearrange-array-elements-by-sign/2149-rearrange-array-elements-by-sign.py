class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        result = [0] * len(nums)

        pos = 0
        neg = 1

        for x in nums:
            if x > 0:
                result[pos] = x
                pos += 2
            else:
                result[neg] = x
                neg += 2

        return result