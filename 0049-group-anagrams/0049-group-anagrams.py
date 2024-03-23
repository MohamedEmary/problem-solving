class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        dictionary = dict()
        for word in strs:
            Sorted = "".join(sorted(word))
            # print(Sorted)
            # print({Sorted, word})
            dictionary[Sorted] = []
        for w in strs:
            Sorted = "".join(sorted(w))
            dictionary[Sorted].append(w)

        return list(dictionary.values())