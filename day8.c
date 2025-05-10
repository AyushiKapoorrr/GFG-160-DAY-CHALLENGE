// User function Template for Java

class Solution {
    public int maximumProfit(int prices[]) {
        int minprice =Integer.MAX_VALUE;
        int maxprofit =0;
        
        for(int price:prices){
            if(price<minprice){
                minprice=price;}
            else if(price - minprice>maxprofit){
                maxprofit=price-minprice;
            }
            }
            return maxprofit;
        }
        
    }
