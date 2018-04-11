int Solution::isPalindrome(int A) {
    string s = to_string(A);
    string r = s;
    reverse(begin(r),end(r));
    if(r==s) {
        return 1;
    }
    return 0;
}
