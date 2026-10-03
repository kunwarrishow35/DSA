class Solution:
    def longestValidParentheses(self, s: str) -> int:
        stack = [-1]
        maximum = 0

        for i in range(len(s)):
            if s[i]=='(':
                stack.append(i)
            else:
                stack.pop()
                if not stack:
                    stack.append(i)
                else:
                    l = i-stack[-1]
                    maximum = max(maximum, l)
        return maximum
                
        