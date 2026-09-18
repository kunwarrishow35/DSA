class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        strs.sort()
        a = strs[0]
        b = strs[-1]
        string = ""
        i = 0
        while i<len(a) and i<len(b):
            if a[i] == b[i]:
                string += a[i]
                i = i+1
            else:
                break

        return string