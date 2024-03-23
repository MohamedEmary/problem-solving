class Solution:
    def isValid(self, s: str) -> bool:
        dict = {'(':')', '{':'}', '[':']'}
        stack = []
        for i in s:
            if i in dict:
                stack.append(i)

            # Means if the stack is empty or the closing bracket doesn't match the 
            # last opening bracket then return False
            elif not stack or dict[stack.pop()] != i: 
                return False
        return len(stack) == 0