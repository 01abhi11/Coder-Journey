//First Thought: Buy on less Sell on high for max profit unlimited transactions

//Initial Solution:
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i-1]) {
                profit += prices[i] - prices[i-1];
            }
        }

        return profit;
    }
};


//Limitations:
// 1. Brute Force / Recursion (exploring buy/sell/skip choices on every day) takes O(2^n) time, causing Time Limit Exceeded (TLE) for n <= 3 * 10^4.
// 2. Unlike LeetCode 121, tracking only a single global minimum fails because multiple transactions are allowed.

//Better/Optimal Solutions:
// 1. Greedy Single Pass (Optimal): Sum every positive consecutive difference (prices[i] - prices[i - 1] > 0) in O(n) time and O(1) space.
// 2. Peak-Valley Approach: Identify every local valley followed by a local peak and sum (peak - valley) — yields the exact same result.
// 3. Dynamic Programming (State Machine): Track `hold` and `not_hold` states across days in O(n) time and O(1) space (useful when transaction fees or cooldowns are added).

//PseudoCode or Logic:
// 1. Initialize profit = 0.
// 2. Loop i from 1 to prices.size() - 1:
//    - If prices[i] > prices[i - 1], add (prices[i] - prices[i - 1]) to profit.
// 3. Return profit after the loop finishes.

//Complexity Analysis:
// - Time Complexity: O(n), where n is the number of days (single pass through the array).
// - Space Complexity: O(1), using only a single accumulator variable `profit`.

//Pattern: Array Greedy

//Learning:
// 1. Telescoping Sum Property: A multi-day upward trend (a -> b -> c) equals the sum of consecutive daily gains ((b - a) + (c - b) = c - a).
// 2. Greedy Decomposition: When unlimited transactions have zero fee, breaking a big trade into daily upward steps avoids tracking valleys and peaks explicitly.
// 3. Edge Cases Handled Naturally: Starting the loop at i = 1 safely returns 0 for single-element arrays ([5]) and strictly decreasing arrays ([7, 6, 4, 3, 1]).
