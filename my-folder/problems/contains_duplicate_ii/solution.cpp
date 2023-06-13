class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> myset;
        for(int i = 0; i < nums.size(); i++){
            //window : [i-k, i]
            //so (i-k-1)th goes out of the window, need to remove it
            if(i-k-1 >= 0) myset.erase(nums[i-k-1]);
            if(!myset.insert(nums[i]).second) return true;
        }
        return false;
    }
};