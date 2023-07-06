class Solution {
public:
    static int compare (const void * a, const void * b)
    {
      return ( *(int*)a - *(int*)b );
    }
    
    int arrayPairSum(vector<int>& nums) {
        int ans = 0;
        qsort(&nums[0], nums.size(), sizeof(int), compare);
        
        for(int i = 0; i < nums.size(); i++){
            if(i%2==0) ans+=nums[i];
        }
        return ans;
    }
};