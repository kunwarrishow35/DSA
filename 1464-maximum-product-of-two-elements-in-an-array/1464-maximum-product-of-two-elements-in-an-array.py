class Solution(object):
    def maxProduct(self, nums):
        nums.sort()
        last = nums[-1]
        secondlast = nums[-2]

        product = (last-1)*(secondlast-1)
        return product
       
       
        