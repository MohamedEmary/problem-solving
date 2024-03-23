class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        row = set()
        for r in board:  # r is a list
            row.clear()
            for num in r:
                if num in row and num != '.':
                    return False
                else:
                    row.add(num)

        col = set()
        for i in range(0, 9):
            col.clear()
            for j in range(0, 9):
                num = board[j][i]
                if num in col and num != '.':
                    return False
                else:
                    col.add(num)

        sets = [set() for i in range(9)]
        for i in range(0, 9):
            for j in range(0, 9):
                # max result for resi will be 6 because max result of (i/3) = 2 when i = 8
                resi = 3 * int(i / 3)

                resj = int(j / 3)
                num = board[j][i]
                if num in sets[resi+resj] and num != '.':
                    return False
                else:
                    sets[resi+resj].add(num)
        return True