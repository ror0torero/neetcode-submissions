class Solution {
public:
    bool isAnagram(string s, string t) {
        int a=s.length();
        int b=t.length();
        if(a!=b) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        return false;
    }
};
