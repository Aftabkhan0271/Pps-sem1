#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int cols = mat[0].size();
        
        // Step 1: Validate dimensions
        if (rows * cols != r * c) {
            return mat;
        }
        
        // Step 2: Initialize the result matrix
        vector<vector<int>> result(r, vector<int>(c));
        
        // Step 3: Fill the new matrix using mathematical mapping
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                // Calculate the position in the flattened original array
                int idx = i * c + j;
                
                // Map to original matrix row and column
                int originalRow = idx / cols;
                int originalCol = idx % cols;
                
                result[i][j] = mat[originalRow][originalCol];
            }
        }
        
        return result;
    }
};
