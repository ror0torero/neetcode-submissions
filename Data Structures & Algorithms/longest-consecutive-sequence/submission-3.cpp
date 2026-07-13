class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        int l=1;
        int mx=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]+1){
                l++;
                cout<<l;
            }
            else l=1;
            mx=max(l,mx);
        }
        return mx;
    }
};
