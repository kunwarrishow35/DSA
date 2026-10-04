class Solution:
    def checkValidString(self, s: str) -> bool:
        minimum = 0
        maximum = 0

        for ch in s:
            if ch == '(':
                minimum += 1
                maximum += 1

            elif ch == ')':
                minimum -= 1
                maximum -= 1

            else:  # '*'
                minimum -= 1
                maximum += 1

            if maximum < 0:
                return False

            if minimum < 0:
                minimum = 0

        return minimum == 0