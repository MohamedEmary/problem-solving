class Solution:
    def minPartitions(self, n: str) -> int:
        h = '0'
        for ch in n:
            if ch > h:
                h = ch
        return h
        