class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        prefix = []
        postfix = [1 for i in range(len(nums))]
        i = 0

        for num in nums:
            if i == 0:
                prefix.append(num)
                i += 1
            else:
                prefix.append(num*prefix[i-1])
                i += 1
        for k in range(len(nums)-1, -1, -1):
            if k == (len(nums)-1):
                postfix[k] = nums[k]
            else:
                postfix[k] = postfix[k+1] * nums[k]

        result = []
        for i in range(len(nums)):
            if i == 0:
                result.append(postfix[i+1])
            elif i == (len(nums) - 1):
                result.append(prefix[i-1])
            else:
                result.append(prefix[i-1] * postfix[i+1])
        return result