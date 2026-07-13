class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int smallestlen=INT_MAX;
        for(auto it: strs){
            if(it.length()<smallestlen)
            smallestlen=it.length();
        }
        if (strs.size() ==1) return strs[0];
        for(int i=0;i<smallestlen;i++){
            char current=strs[0][i];
            for(auto it=strs.begin()+1;it!=strs.end();++it){
                if((*it)[i] !=current)
                return ans;
            }
            ans+=current;
        }
        return ans;
    }
};