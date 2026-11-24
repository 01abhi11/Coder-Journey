//First Thought: Add +1 to last digit of array and then print number

//Initial Solution:
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++; //digits is a vector<int> not a single number
                return digits;
            } else {
                digits[i] = 0;
            }
        }
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};


//Limitations:
// 1. Converting the digits array to an integer, adding 1, and converting back fails due to Integer Overflow.
// 2. With up to 100 digits (1 <= digits.length <= 100), the number far exceeds 64-bit unsigned long long (~20 digits max).
// 3. Instead, we must simulate digit-by-digit addition directly on the array in O(n) time and O(1) extra space.

//PseudoCode or Logic:
// 1. Iterate backward from the rightmost digit (i = n - 1 down to 0):
//    - If digits[i] < 9: increment digits[i]++ and immediately return digits (no carry left to propagate).
//    - Else (digits[i] == 9): set digits[i] = 0 and continue left to carry the 1.
// 2. If the loop finishes without returning, every digit was 9 (e.g., [9,9,9] -> [0,0,0]).
// 3. Set digits[0] = 1 and push_back(0) to form [1,0,0,0], then return digits.

//Key Learnings for Future Problems:
// 1. Check Constraints Against Data Types: Whenever array length represents digits up to 100+, never convert to int/long long—operate directly on the array or string.
// 2. Early Return on Carry Propagation: In right-to-left addition problems, you don't need an explicit carry variable if adding +1 stops as soon as a digit < 9 absorbs it.
// 3. O(1) Front-Insert Trick for All-Zeros: Instead of vector.insert(begin(), 1) which shifts all elements in O(n), overwrite digits[0] = 1 and append 0 at the back.

//Time Complexity: O(n) — single right-to-left pass through the digits vector (best case O(1) when last digit < 9).
//Space Complexity: O(1) — modifies the input vector in-place without extra data structures (O(n) only if counting the returned output when all digits are 9).
