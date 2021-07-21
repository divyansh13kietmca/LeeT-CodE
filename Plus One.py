class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num = ""
        ans = []
        
        for each in digits:
            num += str(each)
            
        val = int(num)
        val += 1
        for each in str(val):
            ans.append(int(each))
            
        return ans
