class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        vote = 0
        candidate = 0

        for i in range(len(nums)):
            if vote == 0:
                candidate = nums[i]
                vote += 1
                
            elif nums[i]==candidate:
                vote += 1
            else:
                vote -= 1
        return candidate