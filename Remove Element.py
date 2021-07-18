class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        j = len(nums)
        extra = []
        for i in range(len(nums)):
            if nums[i] != val:
                extra.append(nums[i])
                
        nums.clear()
        extra.sort()
        for each in extra:
            nums.append(each)
                
        print(extra)
        # return (len(nums),nums)
            
