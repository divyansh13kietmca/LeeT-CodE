class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        extra = []  
        if len(arr) > 1:
            def recurse(initial,check):
                if check == True:
                    extra.append(-1)
                    return
                else:
                    extra.append(max(arr[initial+1:len(arr)]))
                    recurse(initial+1,initial == len(arr)-2)

            recurse(0,False)
        else:
            extra.append(-1)
        return extra
