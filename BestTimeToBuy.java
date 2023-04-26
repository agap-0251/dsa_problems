//Given the prices array of a item and we have to find max profit that we can get.

class Solution {
    public int maxProfit(int[] prices) {
        int p =0;
        for(int i=0;i<prices.length-1;i++){
        if(prices[i+1]>prices[i])
             p=p+(prices[i+1]-prices[i]);
    }
        return p;
        }
}

public class BestTimeToBuy {
    public static void main(String[] args) {
        Solution s = new Solution();
        int prices[] = {8,1,3,5,2,7};
        System.out.println("Max profit is : ");
        System.out.println(s.maxProfit(prices));
        
    }
}
