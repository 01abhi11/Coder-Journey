//First Thought: Buy on first least price then sell on where profit is maximum


//Initial Solution:
                    #include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;

        for (int price : prices) {
            if (price < min_price) {
                min_price = price;
            } else if (price - min_price > max_profit) {
                max_profit = price - min_price;
            }
        }

        return max_profit;
    }
};


//Limitations: O(n^2) brute force approach gets Time Limit Exceeded(input constraints)


//PseudoCode or Logic:
// 1. Track the lowest buying price seen so far (min_price = INT_MAX) and highest profit (max_profit = 0).
// 2. Loop through each day's price:
//    - If current price < min_price, update min_price (better day to buy).
//    - Else, calculate profit (price - min_price) and update max_profit if it's higher.
// 3. Return max_profit after checking all days.


//Complexity Analysis: time: O(n), n is number of elements in price, space: O(1), 2 int var only minPrice,maxProfit


//Pattern: Arrays

// 1. Constraint Check First: n <= 10^5 means O(n^2) (~10^10 ops) will TLE; aim for O(n) or O(n log n).
// 2. Prefix State Tracking: Instead of nested loops looking backward/forward, maintain a running state (like min_so_far or max_so_far) in a single pass.
// 3. Local vs. Global Optimum: Separate the "best candidate ending today" (price - min_price) from the "overall best answer" (max_profit).
