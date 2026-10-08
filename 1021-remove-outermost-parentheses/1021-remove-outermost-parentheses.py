class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        balance = 0
        res = ""
        for ch in s:
            if ch == '(':
                if balance>0:
                    res+='('
                balance+=1
            else:
                balance-=1
                if balance>0:
                    res+=')'
        return res