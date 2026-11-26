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

//Complexity Analysis:

//Pattern: Two Pointers, String

//Learning:
