class Solution {
public:
    int j = 1;
    vector<int> sortArrayByParity(vector<int>& nums) {
        int even_index, odd_index;
        even_index = 0;
        odd_index = nums.size() - 1;
        while(even_index < odd_index)
        {
            if(nums[even_index] % 2 == 0)
            {
                even_index++;
            }
            else
            {
                if(nums[odd_index] % 2 == 0)
                {
                    int temp = nums[even_index];
                    nums[even_index] = nums[odd_index];
                    nums[odd_index] = temp;
                   
                }
             odd_index--;
            }
        }
        return nums;
    }
};
