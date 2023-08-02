class Solution {
public:
    bool isPalindrome(string s) {
        bool r=true;
        int size=s.length();
        if(size==1) return true;
        int i=0;
        int j=size-1;
        while(i<=j){
            if(isalnum(s[i]) && isalnum(s[j])){
                if(tolower(s[i])!=tolower(s[j])){
                    r=false;
                    break;
                }
                i++;
                j--;
            }
            else {
                if(isalnum(s[i])) j--;
                else if(isalnum(s[j])) i++;
                else { 
                    i++;
                    j--;
                }
            }
        }
        return r;
    }
};