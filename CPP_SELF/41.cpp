//First Thought: Have to find out the absent smallest positive to given array

//Initial Solution:
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++){
            while (nums[i] >= 1 && nums[i] <= n )
        }
        return n + 1;


    }
};

//Limitations: dont increment i right after swap until replaced or out of range

//Better/Optimal Solutions:

//PseudoCode or Logic: Cyclic sort(index as hash key)
//x in x-1 index(x is num[i])
//loop i: 0 to n-1
//while nums[i] in valid range of [1,n] and if nums[i] is not at target index then swap with nums[nums[i]-1]
//first index where nums[i] is not equals to i + 1 then return i + 1(missing)
//iff every index match then return n+1

//Complexity Analysis: time: O(n), Space: O(1)

//Pattern: Array HashTable

//Learning:
