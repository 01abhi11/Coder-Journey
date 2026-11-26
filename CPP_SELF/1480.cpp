//First Thought: add consecutive elements of array and give output in array

//Initial Solution: Nested loops
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                ans[i] += nums[j];
            }
        }

        return ans;
    }
};
//Limitations: O(n^2)time, O(n)space

//Better Solution: O(n)time , O(n)space
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
              vector<int> ans(nums.size());
              ans[0] = nums[0];
              for(int i = 1;i<=nums.size()-1;i++){
                ans[i] = ans[i-1] + nums[i];
}
            return ans;
    }
};

//Optimal Solution: O(n)time, O(1)space
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
             for(int i = 1;i<=nums.size()-1;i++){
                //index 0 is already its own sum
                nums[i] += nums[i-1];

             }
                 return nums;
    }
};

//PseudoCode or Logic:
// 1. Keep nums[0] unchanged since the running sum at index 0 is just nums[0].
// 2. Loop i from 1 to nums.size() - 1:
//    - Update nums[i] += nums[i - 1] so each index stores the cumulative sum up to i.
// 3. Return nums.

//Complexity Analysis:
// - Time Complexity: O(n), where n is the size of `nums` (single pass through the array).
// - Space Complexity: O(1) auxiliary space when modifying `nums` in-place (or O(n) if allocating a separate `ans` vector).

//Pattern: Prefix Sum (1D Running Sum)

//Learning:
// 1. Prefix Sum Recurrence: Each cumulative sum builds directly on the previous one (`prefix[i] = prefix[i - 1] + nums[i]`), avoiding O(n^2) repeated additions.
// 2. Starting at Index 1: Beginning the loop at `i = 1` safely avoids out-of-bounds access at `nums[i - 1]` and naturally handles single-element arrays like `[5]`.
// 3. In-Place vs. Extra Vector: Modifying `nums` directly achieves O(1) extra space, while using a separate `ans` vector preserves the original input if needed later.
// 4. Overflow Check: With n <= 1000 and |nums[i]| <= 10^6, the max sum is 10^9, which fits safely inside a 32-bit signed `int` (max ~2.14 * 10^9).