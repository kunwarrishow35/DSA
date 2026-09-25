class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        i =0
        j = 0
        vowel = 'aeiou'
        maximum = 0
        count = 0

        while j<len(s):
            if s[j] in vowel:
                count += 1

            if j-i+1 > k:
                if s[i] in vowel:
                    count -= 1
                
                i += 1
            maximum = max(maximum, count)

            j += 1
        return maximum
