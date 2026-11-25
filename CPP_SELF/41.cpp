//First Thought: Have to find out the absent smallest positive to given array

//Initial Solution:
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++){
            while (nums[i] >= 1 && nums[i] <= n && nums[nums[i] - 1]!= nums[i]) {
                swap(nums[i], nums[nums[i]-1]);

            }
        }
         for(int i = 0; i < n; i++){
            if(nums[i]!= i +1){
                return i +1;
            }
         }
        return n + 1;


    }
};

//Limitations: dont increment i right after swap until replaced or out of range
//linear search will take O(n^2) time will TLE
//SORTING first (sort(nums.begin(), nums.end())) : takes O(n logn)
//Hashset/Boolean array: takes O(n) time but space also

//Better/Optimal Solutions:
//in place sign marking: replace less than to n+1, negate `nums[abs(nums[i]) - 1]` to mark presence, and return the first index with a positive value (O(n) time, O(1) space).

//PseudoCode or Logic: Cyclic sort(index as hash key)
//n = nums.size()
//x in x-1 index(x is num[i])
//loop i: 0 to n-1
//while nums[i] in valid range of [1,n] and if nums[i] is not at target index then swap with nums[nums[i]-1]
//first index where nums[i] is not equals to i + 1 then return i + 1(missing)
//iff every index match then return n+1

//Complexity Analysis: time: O(n), Space: O(1)

//Pattern: Array HashTable

//Learning:
// 1. Pigeonhole / Range Bound: For an array of size n, the first missing positive can never exceed n + 1; numbers <= 0 or > n are irrelevant.
// 2. Duplicate Guard in Cyclic Sort: Always check `nums[nums[i] - 1] != nums[i]` instead of `nums[i] != i + 1` to avoid an infinite loop on duplicate values like `[1, 1]`.
// 3. Overflow Safety: Put bounds checks (`nums[i] >= 1 && nums[i] <= n`) BEFORE `nums[i] - 1` in the `while` condition so `INT_MIN - 1` never triggers signed integer overflow.
