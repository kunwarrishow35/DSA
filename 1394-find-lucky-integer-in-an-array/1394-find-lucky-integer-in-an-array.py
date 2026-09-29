class Solution:
    def findLucky(self, arr: list[int]) -> int:
        freq = {}

        for x in arr:
            freq[x] = freq.get(x, 0) + 1

        answer = -1

        for x in freq:
            if freq[x] == x:
                answer = max(answer, x)

        return answer