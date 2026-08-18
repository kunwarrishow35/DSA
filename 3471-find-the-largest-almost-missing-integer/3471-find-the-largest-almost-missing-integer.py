class Solution:
    def largestInteger(self, nums: List[int], k: int) -> int:
        count = {}

        # Count how many times each number appears
        for num in nums:
            count[num] = count.get(num, 0) + 1

        # k == 1
        if k == 1:
            ans = -1

            for num in nums:
                if count[num] == 1:
                    ans = max(ans, num)

            return ans

        # k == len(nums)
        if k == len(nums):
            return max(nums)

        # 1 < k < len(nums)
        ans = -1

        # First element
        if count[nums[0]] == 1:
            ans = nums[0]

        # Last element
        if count[nums[-1]] == 1:
            ans = max(ans, nums[-1])

        return ans
        