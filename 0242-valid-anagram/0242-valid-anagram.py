class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        freq = {}
        for i in s:
            freq[i] = freq.get(i, 0)+1
        dab = {}
        for i in t:
            dab[i] = dab.get(i, 0)+1
        if freq == dab:
            return True
        return False