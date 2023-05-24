class Solution {
public:
    void backtrack(vector<vector<int>>& perms, vector<int>& perm, vector<int>& nums, vector<bool>& used){
        if(perm.size() == nums.size()){
            perms.push_back(perm);
        }else{
            for(int i = 0; i < nums.size(); i++){
                if(used[i]) continue;
                //nums[i] plays the role of nums[i-1]
                if(i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;
                perm.push_back(nums[i]);
                used[i] = true;
                backtrack(perms, perm, nums, used);
                perm.pop_back();
                used[i] = false;
            }
        }
    };
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int N = nums.size();
        vector<vector<int>> ans;
        vector<int> perm;
        vector<bool> used(N, false);
        
        sort(nums.begin(), nums.end());
        backtrack(ans, perm, nums, used);
        
        return ans;
    }
};