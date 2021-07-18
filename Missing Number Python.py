class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        for each in range(len(nums)+1):
            if each not in nums:
                return each
