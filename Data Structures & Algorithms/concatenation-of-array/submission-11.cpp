class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        n*=2;
        nums.resize(n,0);
        for (int i=0;i<n/2;i++){
            nums[i+n/2]=nums[i];
        }
        return nums;
    }
};