// class Solution {
//     public int maxProfit(int[] prices) {
//         if(prices==null || prices.length ==0) return 0;
//         int buy=prices[0],profit=0;
//         for(int i=0;i<prices.length;i++){
//             buy=Math.min(buy,prices[i]);
//             profit=Math.max(profit,prices[i]-buy);
//         }
//         return profit;
//     }
// }


class Solution {
    public int maxProfit(int[] prices) {
        if (prices == null || prices.length == 0) {
            return 0; // If prices array is empty, no profit can be made
        }
        
        int buy = prices[0]; // Initialize buy to the price of the first day
        int profit = 0; // Initialize profit to 0
        
        for (int i = 0; i < prices.length; i++) {
            buy = Math.min(buy, prices[i]); // Update buy to the minimum price encountered so far
            profit = Math.max(profit, prices[i] - buy); // Update profit to the maximum possible profit
        }
        
        return profit; // Return the maximum profit obtained
    }
}
