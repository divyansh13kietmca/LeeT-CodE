class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        arr.sort()
        print(arr)
                
        flag = False
        for i in range(len(arr)):
            if arr[i] > 0:
                if (2*arr[i]) > arr[len(arr)-1]:
                    # print(f" in first if i = {i} j = {j}")
                    break
                else:
                    j = len(arr)-1
                    # print(f" in else j = {j}")
                    while 2*arr[i] <= arr[j] and i < j:
                            # print(f"in while i = {i}, j = {j}")
                            if 2*arr[i] == arr[j]:
                                # print(f" in last if i = {i} j = {j}")
                                flag = True
                                break
                            j -= 1
            else:
                if(2*arr[i]) < arr[0]:
                    pass
                else:
                    j = 0
                    while 2*arr[i] >= arr[j] and i > j:
                        if 2*arr[i] == arr[j]:
                            flag = True
                            break
                        j += 1
        
        # print(arr)
        return flag
