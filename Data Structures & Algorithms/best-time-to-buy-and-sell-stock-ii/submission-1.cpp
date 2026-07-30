class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), maxProfit = 0, stock = prices[0];

        for(int i = 1; i < n; i++) {
            if(prices[i] < stock) {
                stock = prices[i];
                continue;
            }
            else {
                int temp = 0, tempStock = stock;
                while(i < n && prices[i] > tempStock) {
                    temp = max(temp, prices[i] - stock);
                    tempStock = prices[i];
                    i++;
                }
                maxProfit += temp;
                if(i < n)
                    stock = prices[i];
            }
        }
        return maxProfit;
    }
};