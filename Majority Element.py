class Solution:
    def majorityElement(self, nums: List[int]) -> int:\
        
        extra = set(nums)
        for each in extra:
            if nums.count(each) > len(nums)//2:
                return each
