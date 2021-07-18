class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        flag = False
        x = arr.index(max(arr))
        check = []
        # print(x)
        for i in range(x+1):
            check.append(arr[i])
            
        if len(arr[0:x+1]) == len(set(check)):
            check.clear()
            for i in range(x,len(arr)):
                check.append(arr[i])
            if len(arr[x:len(arr)]) == len(set(check)):
                check.clear()
                if 0 != x and x != len(arr)-1:
                    # print(arr[i-1],arr[i])
                    for i in range(1,x+1):
                        print(arr[i-1],arr[i])
                        if arr[i-1] > arr[i]:
                            # print(arr[i-1],arr[i])
                            flag = False
                            break
                        else:
                            flag = True

                    if flag == True:
                        for i in range(x+1,len(arr)):
                            if arr[i-1] < arr[i]:
                                # print(arr[i-1],arr[i])
                                flag = False
                                break
                            else:
                                flag = True

        return flag
