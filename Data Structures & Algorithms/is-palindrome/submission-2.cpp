class Solution {
public:
    bool isPalindrome(string s) {
        string a="",b="";
        for(char c:s){
            if (isalnum(c)) a+=tolower(c);
            
        }
        reverse(s.begin(),s.end());
        for(char c:s){
            if (isalnum(c)) b+=tolower(c);
            
        }
        cout<<a<<endl<<b;
        return a==b;
    }
};
