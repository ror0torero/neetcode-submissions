class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int original_size=nums.size();
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int new_size=nums.size();
        return new_size!=original_size;
    }
};