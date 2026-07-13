class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(auto it:nums){
            mpp[it]+=1;
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            auto highest=max_element(mpp.begin(),mpp.end(), [](const auto& p1, const auto& p2) {
            return p1.second < p2.second; // Compare the values (second element of pair)
        });
            ans.push_back(highest->first);
            mpp.erase(highest);
        }
        return ans;
    }
};
