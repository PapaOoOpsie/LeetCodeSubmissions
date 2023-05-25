class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0 || x == 1){
            return 1;
        }
        
        double ans = 1.0;
        
        if(n == INT_MIN){
            //take -1 power away
            ans /= x;
            ++n;
            n *= -1;
            x = 1.0/x;
        }else if(n < 0){
            n *= -1;
            x = 1.0/x;
        }
        
        while(n){
            if(n & 1){
                ans *= x;
            }
            
            x *= x;
            n >>= 1;
        }
        
        return ans;
    }
};