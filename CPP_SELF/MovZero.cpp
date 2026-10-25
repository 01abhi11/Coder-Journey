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

/*Logic: One pointer to track where is NonZeroElement
2nd for tracking i
i from 0 to n-1 iteration(i+1 will exceed)
if i not equals 0 then swap with pointer then pointer ++
all element before pointer will be nonzero in relative order*/

//Time Com is O(N) [N is num.size]
//Space Com is O(1) [IN place]


