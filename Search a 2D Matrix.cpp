class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int flag = false;
        for (int i = 0; i <= matrix.size()-1; i++)
        {
                if (matrix[i][matrix[i].size()-1] >= target)
                {
                    for(int j = 0; j <= matrix[i].size()-1; j++)
                    {
                        if(matrix[i][j] == target)
                        {
                            flag = true;
                            break;
                        }
                    }
                    break;
                }
                
        }
        return flag;
    }
};
