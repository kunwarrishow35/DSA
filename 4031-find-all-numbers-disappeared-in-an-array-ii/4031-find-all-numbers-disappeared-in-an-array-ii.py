class Solution:
    def findDisappearedNumbers(self, nums: list[int], lower: int, upper: int) -> list[list[int]]:

        elements = set(nums)
        first = None
        res = []

        for i in range(lower, upper+1):
            if i not in elements:
                if first is None:
                    first = i
            else:
                if first is not None:
                    res.append([first, i-1])
                    first = None
        if first is not None:
            res.append([first, upper])
        return res

                    
        
        