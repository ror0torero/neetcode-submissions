class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre=1;
        int n=nums.size();
        vector<int>prefix={1};
        for(int i=1;i<n;i++){
            pre*=nums[i-1];
            prefix.push_back(pre);
        }
        int suf=1;
        vector<int>suffix(n,1);
        for(int i=n-2;i>=0;i--){
            suf*=nums[i+1];
            suffix[i]=suf;
        }
        for(int i=0;i<n;i++){
            nums[i]=prefix[i]*suffix[i];
        }
        return nums;
    }
};
