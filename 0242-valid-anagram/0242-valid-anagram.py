class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freq ={}
        d ={}
        for i in s:
            freq[i] = freq.get(i, 0)+1
        for i in t:
            d[i] = d.get(i, 0)+1

        return freq == d

    #easiest sort and compre
    #return s.sort() == t.sort()
        