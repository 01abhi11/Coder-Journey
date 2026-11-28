//First Thought: 1 char del hone k bdd bhi palindrome rehna chahiye

//Theory:

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

//Limitations:

//Better/Optimal Solutions:

//PseudoCode or Logic:


//Complexity Analysis: O(n) for time, outer loop read n/2 pairs, isPalin scans remaining inner segment at most twice
//O(1) for space no new string is created not copying

//Pattern:

//Learning:
