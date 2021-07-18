class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        extra = set(nums)
        if len(nums) == len(extra):
            return False
        else:
            for each in extra:
                if nums.count(each) >= 2:
                    return True
            return False        
