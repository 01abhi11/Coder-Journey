/* First Thought: No. of steps given honge utne elements right se aage krne h

Initial Solution:*/

/*class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        vector<int> temp(n);

        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];
        }
        nums = temp;
    }
};

//T&S: O(n)

//Deviation: MAX COMPLEXITY*/

//Better Solution: Reversal

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

//Logic: Reverse complete array then 



