class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        count = 0
        for each in nums:
            if len(list(map(str,str(each)))) % 2 == 0:
                count += 1
            

        return count
