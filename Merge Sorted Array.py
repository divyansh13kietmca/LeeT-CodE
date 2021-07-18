class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        # i = 0
        # for j,each in enumerate(nums1):
        #     if each == 0:
        #         nums1[j] = nums2[i]
        #         i += 1
        # nums1.sort()
        count = 0
        while count != n:
            nums1.remove(0)
            count += 1
                
        for j in range(len(nums2)):
            nums1.append(nums2[j])
            
        nums1.sort()
        # print(nums1)
