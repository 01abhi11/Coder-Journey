//First Thought: give output in array form of reversed order char as given in input

//Theory:


//Initial Solution:
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        vector<char> temp(n);

        for (int i = 0; i < n; i++) {
            temp[i] = s[n - 1 - i];
        }

        s = temp;
    }
};

//Limitations: O(n)time, O(n)space

//Better/Optimal Solutions:
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0;
        int r = s.size() - 1;

        while(l<r){
            swap(s[l], s[r]);
            l++;
            r--;

        }
    }
};

//PseudoCode or Logic:
// 1. Initialize two pointers: `l = 0` (start of `s`) and `r = s.size() - 1` (end of `s`).
// 2. While `l < r`:
//    - Swap `s[l]` and `s[r]`.
//    - Increment `l++` and decrement `r--`.
// 3. Stop when `l >= r` (pointers meet at the middle for odd lengths or cross for even lengths).

//Complexity Analysis:
// - Time Complexity: O(n), where n is the size of `s` (performs n/2 swaps, visiting each character once).
// - Space Complexity: O(1) auxiliary space (modifies `s` in-place using only two integer pointers).

//Pattern: Two Pointers (Converging / Opposite Ends), String

//Learning:
// 1. In-Place Reference Modification: Since `s` is passed by reference (`vector<char>& s`) with a `void` return type, swapping elements directly mutates the caller's vector without needing extra memory or a return statement.
// 2. Termination Condition (`l < r`): Using strict `<` handles both even-length arrays (pointers cross) and odd-length arrays (pointers meet at the middle element, which does not need to swap with itself).
// 3. Iterative vs. Recursive Space: Iterative two pointers achieve true O(1) space, whereas a recursive reversal uses O(n) call-stack frames.
