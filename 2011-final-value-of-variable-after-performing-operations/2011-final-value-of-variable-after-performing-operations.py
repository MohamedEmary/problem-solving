class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        x = 0
        for n in operations:
            if ( n == '--X') or ( n == 'X--'):
                x-=1
            else:
                x+=1
        return x