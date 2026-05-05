class Solution {
public:
    bool isPalindrome(string s) {
    int i = 0, j = s.length() - 1;

    while(i < j) {
        // skip invalid left
        while(i < j && !isalnum(s[i])) i++;

        // skip invalid right
        while(i < j && !isalnum(s[j])) j--;

        char left = tolower(s[i]);
        char right = tolower(s[j]);

        if(left != right) return false;

        i++;
        j--;
    }

    return true;
    }
    
};