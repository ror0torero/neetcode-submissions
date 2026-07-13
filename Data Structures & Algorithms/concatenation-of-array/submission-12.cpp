class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // Insert elements at the end, taking them from the beginning to the end
        nums.insert(nums.end(), nums.begin(), nums.end());
        return nums;
    }
};