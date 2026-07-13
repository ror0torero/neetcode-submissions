class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int majele=nums[0];
        int count=0;
        for(int i=0;i<n;i++){
            if(majele==nums[i]) count++;
            else{ 
                if(count>0)
                    count--;
            }
            if (count==0){
                majele=nums[i];
                count=1;
            }
        }
        return majele;
    }
};