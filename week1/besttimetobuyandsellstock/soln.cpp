class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int least = 99999;
        int diff=0;
        int size=prices.size();
        for(int i=0; i<size; i++) {
            if(least>prices[i]) {
                least = prices[i];
            }
            diff = prices[i]-least;
            if(res<diff) {
                res=diff;
            }
        }
        return res;
    }
};