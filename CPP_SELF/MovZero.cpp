//First Thought: Move zero at the end
//Initial Solution:

//Two-Pointer Approach:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroFoundAt = 0;

        // 0 to n-1 iterations
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[lastNonZeroFoundAt], nums[i]);
                lastNonZeroFoundAt++;
            }
        }
    }
};


