class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        res = []
        for each in nums:
            res.append(each*each)
            
        res.sort()
        return res
