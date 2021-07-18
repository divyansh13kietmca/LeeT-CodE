class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        extra = set(nums)
        
        nums.clear()
        for each in extra:
            nums.append(each)
        nums.sort()
