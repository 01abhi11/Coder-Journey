//First Thought: lowercase m right and left se same hona chahiye

//Theory: two pointers, string, ignoring the cases
//alpha-numeric - A-Z,a-z,0-9, dont count even space
//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward.
//isalnum(c) is a built-in C++ standard library function (from <cctype>) that checks whether a character c is alphanumeric—meaning either a letter ('A'–'Z', 'a'–'z') or a digit ('0'–'9').

//Initial Solution:
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
            if (tolower(s[l]) != tolower(s[l])){
                return false;
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
//

//Complexity Analysis:

//Pattern: two pointers

//Learning:
