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

//Better/Optimal Solutions:

//PseudoCode or Logic:

//Complexity Analysis:

//Pattern: Array Greedy

//Learning:
