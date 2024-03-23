class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        myHash = defaultdict(list)
        for word in strs:
            # List of 26 places of zeros which are the english letters
            letters = [0] * 26
            for letter in word:
                letters[ord(letter) - ord('a')] += 1
            myHash[tuple(letters)].append(word)
        # for word in strs:
        #     # List of 26 places of zeros which are the english letters
        #     letters = [0] * 26
        #     for letter in word:
        #         letters[ord(letter) - ord('a')] += 1
        #     myHash[tuple(letters)].append(word)
        return list(myHash.values())