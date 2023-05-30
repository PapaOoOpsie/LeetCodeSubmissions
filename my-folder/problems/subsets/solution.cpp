class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        //its binary representation has length (n+1)
        int N = nums.size();
        int nthBit = 1 << N;
        vector<vector<int>> ans;
        
        // cout << N << " " << nthBit << endl;
        
        //(1 << n) equals to (int)pow(2, n)
        for(int i = 0; i < nthBit; i++){
            const size_t bitcount = sizeof(nthBit)*8;
            string binary = bitset<bitcount>(i | nthBit).to_string();
            //the first (bitcount -N) bit is just used for keeping the leading 0, so here ignore it
            //select the last N bits
            string bitmask = binary.substr(bitcount-N);
            
            // cout << i << " " << bitmask << endl;
            
            vector<int> subset;
            for(int j = 0; j < N; j++){
                if(bitmask[j] == '1'){
                    subset.push_back(nums[j]);
                }
            }
            ans.push_back(subset);
        }
        
        return ans;
    }
};