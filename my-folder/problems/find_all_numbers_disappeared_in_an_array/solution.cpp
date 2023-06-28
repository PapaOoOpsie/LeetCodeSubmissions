class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            //after we seen nums[i], we make the position of nums[i]-1 negative 
            int val = abs(nums[i])-1;
            if(nums[val]>0){
                //we have seen val+1 in nums
                nums[val] *= -1;
            }
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]>0) ans.push_back(i+1);
        }
        
        return ans;
    }
};