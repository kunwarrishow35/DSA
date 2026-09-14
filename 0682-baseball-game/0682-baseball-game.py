class Solution:
    def calPoints(self, operations: List[str]) -> int:
        stack = []

        for i in range(len(operations)):
            if operations[i].lstrip('-').isdigit():
                stack.append(int(operations[i]))
            elif operations[i] == 'D':
                x = 2*stack[-1]
                stack.append(x)
            elif operations[i] == '+':
                x = stack[-1]
                y = stack[-2]
                stack.append(x+y)
            elif operations[i] == 'C':
                stack.pop()
        return sum(stack)
