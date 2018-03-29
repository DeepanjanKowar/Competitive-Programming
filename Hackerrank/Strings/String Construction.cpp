#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    int t;
    cin>>t;
    while(t--) {
        cin>>s;
    int letters[26]={0};
    for(int i=0;i<s.length();i++) {
        letters[s[i]-'a'] = 1;
    }
    int count = 0;
    for(int i=0;i<26;i++) {
        if(letters[i])
            count++;
    }
    cout<<count<<"\n";
    }
    return 0;
}
