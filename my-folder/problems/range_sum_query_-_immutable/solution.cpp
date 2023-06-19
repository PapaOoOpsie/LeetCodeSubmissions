class NumArray {
public:
    vector<int> acc_sum;
    
    NumArray(vector<int>& nums) {
        int N = nums.size();
        this->acc_sum = vector<int>(N+1);
        //for padding
        this->acc_sum[0] = 0;
        for(int i = 1; i <= N; i++){
            this->acc_sum[i] = this->acc_sum[i-1] + nums[i-1];
        }
    }
    
    int sumRange(int i, int j) {
        //convert i and j from 0-based to 1-based
        return this->acc_sum[j+1] - this->acc_sum[i];
    }
};
