class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        freq = [0] * 128
        left = 0
        ans = 0

        for right in range(len(s)):
            freq[ord(s[right])] += 1

            while freq[ord(s[right])] > 2:
                freq[ord(s[left])] -= 1
                left += 1

            ans = max(ans, right - left + 1)

        return ans