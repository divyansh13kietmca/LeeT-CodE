class Solution {
public:
    int j = 1;
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even,odd;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        even.insert(even.end(),odd.begin(),odd.end());
        return even;
    }
};
