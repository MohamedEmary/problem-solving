class Solution:
    def isPalindrome(self, s: str) -> bool:
        # Uppercase ASCII letters are between 65 and 90
        # Lowercase ASCII letters are between 97 and 122

        st = ""
        for ch in s:
            if ch.isalnum():
                st += ch
        st = st.lower()

        if len(st) == 0:
            return True

        i, j = 0, len(st)-1
        # print(st)
        for k in range(len(st)//2):
            if (st[i] != st[j]):
                return False
            i += 1
            j -= 1

        return True