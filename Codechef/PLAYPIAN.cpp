#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        string str;
        cin>>str;
        if(str.length()%2) {
            cout<<"no\n";
            continue;
        }
        int f=0;
        for(int i=0;i<str.length()-1;i+=2) {
            if(str[i]==str[i+1]) {
                cout<<"no\n";
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"yes\n";
    }
}
