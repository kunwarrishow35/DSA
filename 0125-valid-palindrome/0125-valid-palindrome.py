class Solution:
    def isPalindrome(self, s: str) -> bool:
        edit = ""
        for ch in s:
            if ch.isalnum():
                edit += ch.lower()
        new = edit[::-1]

        return edit == new
        