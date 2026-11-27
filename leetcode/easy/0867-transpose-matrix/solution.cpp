class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // 1. Allocate result matrix with flipped dimensions
        vector<vector<int>> res(cols, vector<int>(rows));
        
        // 2. Map each element to its transposed position
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                res[j][i] = matrix[i][j];
            }
        }
        
        return res;
    }
};