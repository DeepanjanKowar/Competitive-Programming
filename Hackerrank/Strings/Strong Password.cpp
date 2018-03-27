#include <bits/stdc++.h>

using namespace std;

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int small = 0, caps = 0, dig = 0, spc = 0, count = 0;
    for(int i=0;i<n;i++) {
        if(password[i]>='a' && password[i] <='z') {
            small = 1;
            continue;
        }
        if(password[i]>='A' && password[i] <='Z') {
            caps = 1;
            continue;
        }
        if(password[i]>='0' && password[i] <='9') {
            dig = 1;
            continue;
        }
        if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='%' || password[i]=='^' || password[i]=='&' || password[i]=='*' || password[i]=='(' || password[i]==')' || password[i]=='-' || password[i]=='+') {
            spc = 1;
            continue;
        }
    }
    if(small==0)
        count++;
    if(caps==0)
        count++;
    if(dig==0)
        count++;
    if(spc==0)
        count++;
    if(n + count < 6) {
        count = 6 - n;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    string password;
    cin >> password;
    int answer = minimumNumber(n, password);
    cout << answer << endl;
    return 0;
}
