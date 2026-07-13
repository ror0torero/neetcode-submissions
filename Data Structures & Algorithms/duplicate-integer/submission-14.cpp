class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int sizen=nums.size();
        set<int> numss(nums.begin(),nums.end());
        int sizes=numss.size();
        if (sizen==sizes) return false;
        else return true;

    }
};