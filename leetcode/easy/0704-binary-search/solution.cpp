#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1; // Initialize right pointer
        
        while (left <= right) {
            // Prevent potential integer overflow
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid; // Target found
            } else if (nums[mid] < target) {
                // Target is in the right half; move left pointer
                left = mid + 1;
            } else {
                // Target is in the left half; move right pointer
                right = mid - 1;
            }
        }
        
        return -1; // Target not found
    }
};
