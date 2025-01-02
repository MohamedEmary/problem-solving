/**
 * @param {character[][]} board
 * @return {boolean}
 */
var isValidSudoku = function (board) {
    const set1 = new Set();
    const set2 = new Set();
    for (let i = 0; i < 9; i++) {
        for (let j = 0; j < 9; j++) {
            if (board[i][j] !== ".") {
                if (set1.has(board[i][j])) return false;
                set1.add(board[i][j]);
            }

            if (board[j][i] !== ".") {
                if (set2.has(board[j][i])) return false;
                set2.add(board[j][i]);
            }
        }
        set1.clear();
        set2.clear();
    }

    const set3 = new Set();
    let k = 1;
    for (let i = 0; i < 9; i += 3) {
        for (let j = 0; j < 9; j += 3) {
            for (let a = i; a < i + 3; a++) {
                for (let b = j; b < j + 3; b++) {
                    if (board[a][b] !== "." && set3.has(board[a][b])) return false;
                    set3.add(board[a][b]);
                }
            }
            set3.clear();
        }
    }
    return true;
};