//First Thought: Buy on less Sell on high for max profit

//Initial Solution:
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
            while()
        }

        return max_profit;
    }
};


//Limitations:

//Better/Optimal Solutions:

//PseudoCode or Logic:

//Complexity Analysis:

//Pattern: Array Greedy

//Learning:
