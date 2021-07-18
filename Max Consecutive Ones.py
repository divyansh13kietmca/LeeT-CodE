class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        count = 0
        res = []
        for n in range(len(nums)):
            if nums[n] == 1:
                count += 1
            else:
                count = 0
            res.append(count)
        res.sort()
        return res[len(res)-1]
