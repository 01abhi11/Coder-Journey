//First Thought: lowercase m right and left se same hona chahiye

//Theory:

// 1. Alphanumeric Filtering (`isalnum`): A valid palindrome only considers ASCII letters ('A'-'Z', 'a'-'z') and digits ('0'-'9'), ignoring spaces, punctuation, and symbols.
// 2. Case Insensitivity (`tolower`): Uppercase and lowercase versions of the same letter are treated as equal ('A' == 'a').
// 3. Converging Two Pointers: Starting at opposite ends (`l = 0`, `r = n - 1`) and moving inward while skipping non-alphanumeric characters checks symmetry in a single pass with O(1) extra space.

//alpha-numeric - A-Z,a-z,0-9, dont count even space
//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward.
//isalnum(c) is a built-in C++ standard library function (from <cctype>) that checks whether a character c is alphanumeric—meaning either a letter ('A'–'Z', 'a'–'z') or a digit ('0'–'9').
/*Return Value
Non-zero (true in if/while checks): If c is an uppercase letter, lowercase letter, or digit (0–9).

0 (false): If c is a space, punctuation mark, or symbol (like ' ', ',', ':', '@', '!').*/
//(Also, if you pass unsigned char like isalnum((unsigned char)s[l]) and tolower((unsigned char)s[l]), it avoids undefined behavior if any non-ASCII negative char ever appears, though standard LeetCode 125 inputs are printable ASCII.)

//Initial Solution:
class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";
        for (char c : s) {
            if (isalnum((unsigned char)c)) {
                clean += tolower((unsigned char)c);
            }
        }
        string rev = clean;
        reverse(rev.begin(), rev.end());
        return clean == rev;
    }
};


//Limitations: Building a filtered string `clean` and its reversed copy `rev` requires O(n) extra space, whereas two pointers solve it in-place using O(1) auxiliary space.

//Better/Optimal Solutions:
class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;

        while(l<r){

            while(l < r && !isalnum(s[l])) {
                l++;

            }
            while ( l < r && !isalnum(s[r])) {
                r--;
            }
            if (tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};

//PseudoCode or Logic:

//Complexity Analysis:

//Pattern: two pointers

//Learning:
