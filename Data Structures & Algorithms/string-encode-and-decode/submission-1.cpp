class Solution {
public:

    string encode(vector<string>& strs) {
            string res="";
            for(auto s:strs){
                int a=s.length();
                res+=(unsigned char)a;
                for(char c:s){
                    c=(c+19+256)%256;
                    res+=c;
                }
            }
        return res;
    }

    vector<string> decode(string s) {
            int n=s.length();
            int i=0;
            vector<string> ans;
            while(i<n){
                string a="";
                int k=(unsigned char)s[i];
                i++;
                int target=i+k;
                for(;i<target;i++){
                    a+=(s[i]-19+256)%256;
                }
                ans.push_back(a);
            }
        return ans;
    }
};
