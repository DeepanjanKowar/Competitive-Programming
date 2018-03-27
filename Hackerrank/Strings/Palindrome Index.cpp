#include <bits/stdc++.h>

using namespace std;


/*int isPalindrome(string str) {
    int l = 0;
    int h = str.length() - 1;
    while (h > l) {
        if (str[l++] != str[h--]) {
            return 0;
        }
    }
    return 1;
} */

int palindromeIndex(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[s.length()-1-i]){
            if(s[i+1]==s[s.length()-1-i]  && s[i+2]==s[s.length()-2-i]){
                return i;
            }
            else if(s[i]==s[s.length()-2-i] && s[i+1]==s[s.length()-3-i]){
                int y= s.length()-1-i;
                return y;
            }
        }
    }
        return -1;
}
int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = palindromeIndex(s);
        cout << result << endl;
    }
    return 0;
}
