class Solution {
public:
    int arrangeCoins(int n) {
        int x = ceil(sqrt(2)*sqrt(n));
        
        while((x+1)*(x/2.0) > n){
            x--;
        }
        
        return x;
    }
};