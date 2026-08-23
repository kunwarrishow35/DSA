class Solution:
    def findDisappearedNumbers(self, nums: list[int], lower: int, upper: int) -> list[list[int]]:
        arr = set(nums)
      
        res = []
        i = lower

        while i < upper+1:
            if i in arr:
                i+=1
                continue
            start = i
            while i<= upper and i not in arr:
                i += 1
            res.append([start, i-1])
        return res

    



        
                    
        
        