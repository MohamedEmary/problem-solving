class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        dic = {}
        # key is the number
        # value is the number of occurences

        # we add 1 because index 0 will be empty
        freq = [[] for i in range(len(nums)+1)]

        for num in nums:
            if num in dic:
                dic[num] += 1
            else:
                dic[num] = 1

        for key, val in dic.items():
            # Each array contains a list of numbers that appear that many times
            freq[val].append(key)

        result = []

        # highest index in freq is equal to (len(freq) - 1)
        for l in range(len(freq) - 1, 0, -1):
            for n in freq[l]:
                result.append(n)
                if len(result) == k:
                    return result