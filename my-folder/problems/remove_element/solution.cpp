class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = nums.size();
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        // cout << l << "-> " << nums.size() << endl;
        return nums.size();
    }
};