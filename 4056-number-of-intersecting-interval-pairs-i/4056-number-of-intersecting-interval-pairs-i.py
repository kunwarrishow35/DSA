class Solution:
    def countIntersectingIntervals(self, intervals: list[list[int]]) -> int:
        count = 0
        for i in range(0, len(intervals)):
            for j in range(i+1, len(intervals)):
                start = max(intervals[i][0], intervals[j][0])
                end = min(intervals[i][1], intervals[j][1])
  
                if start <= end:
                    count = count+1
                
        return count 
