class Solution:
    def reverse(self, x: int) -> int:
        ls = []
        res = ""
        for e in str(abs(x)):
            ls.append(e)
        ls.reverse()
        
        for each in ls:
            res += each
        if x < 0:
            if(-pow(2,31)) < -(int(res)) < pow(2,31):
                return (-int(res))
            else:
                return 0
        else:
            if(-pow(2,31)) < int(res) < pow(2,31):
                return int(res)
            else:
                return 0
            
