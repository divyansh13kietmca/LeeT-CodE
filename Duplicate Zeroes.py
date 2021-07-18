class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        extra = []
        i = 0
        size = len(arr)
        for i in range(len(arr)):
            if arr[i] == 0:
                extra.append(0)
            extra.append(arr[i])
        for i in range(len(arr)):
            arr[i] = extra[i]  
        # print(extra,arr)
