//First Thought: add consecutive elements of array and give output in array

//Initial Solution: Nested loops
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {


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

//Complexity Analysis:

//Pattern:

//Learning:
