//First Thought: 1 char del hone k bdd bhi palindrome rehna chahiye

//Theory:
// 1. Converging Two Pointers: Starting at opposite ends (`l = 0`, `r = n - 1`) and moving inward while `s[l] == s[r]` verifies palindrome symmetry in O(n) time and O(1) space.
// 2. Single-Deletion Branching: Since at most ONE character can be deleted, every matching outer pair (`s[l] == s[r]`) can be safely skipped. At the very first mismatch (`s[l] != s[r]`), the deleted character MUST be either `s[l]` or `s[r]`.
// 3. Substring Range Checking: Instead of erasing characters and allocating new strings, a helper function `isPalin(s, left, right)` checks symmetry directly on index bounds `[l + 1, r]` or `[l, r - 1]` in O(1) extra space.

//Initial Solution:
class Solution {
private:
    bool isPalin(const string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

public:
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;

        while (l < r) {
            if (s[l] != s[r]) {
                return isPalin(s, l + 1, r) || isPalin(s, l, r - 1);
            }
            l++;
            r--;
        }

        return true;
    }
};

//Limitations: // - Deleting every index `i` one by one and building a new string `temp` takes O(n^2) time and O(n) extra space, which hits Time Limit Exceeded (TLE) for strings up to length 10^5.

//Better/Optimal Solutions:

//PseudoCode or Logic:
// 1. Initialize two pointers: `l = 0` and `r = s.size() - 1`.
// 2. While `l < r`:
//    - If `s[l] == s[r]`, move both inward (`l++`, `r--`).
//    - On the first mismatch (`s[l] != s[r]`):
//      - Return `isPalin(s, l + 1, r) || isPalin(s, l, r - 1)` (skip either the left mismatched char or the right mismatched char and verify the remaining middle segment is a strict palindrome).
// 3. If the loop finishes with zero mismatches, return `true`.


//Complexity Analysis: O(n) for time, outer loop read n/2 pairs, isPalin scans remaining inner segment at most twice
//O(1) for space no new string is created not copying

//Pattern: Two Pointers (Converging / Opposite Ends with Single-Mismatch Branching), String

//Learning:
// 1. Always Test Both Branches on First Mismatch: Greedily skipping only `s[l]` or only `s[r]` fails when both choices initially match their immediate neighbor (e.g., "...cupu...uupuc..."). Using logical OR (`||`) checks both possibilities cleanly.
// 2. Pass Strings by Const Reference (`const string& s`): Avoids O(n) string copies on helper function calls while guaranteeing the helper cannot accidentally mutate `s`.
// 3. Zero-Allocation Substring Checks: Passing `(l, r)` index boundaries to a helper function replaces expensive `substr()` or `erase()` operations with O(1) space.
