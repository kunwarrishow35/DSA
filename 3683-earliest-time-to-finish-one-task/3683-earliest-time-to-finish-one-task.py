class Solution:
    def earliestTime(self, tasks: List[List[int]]) -> int:
        res = float('inf')
        for s, t in tasks:
            res = min(res, s+t)
        return res
