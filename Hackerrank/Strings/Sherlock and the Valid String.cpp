#include <bits/stdc++.h>

using namespace std;

string isValid(string s){
    // Complete this function
    if(s.length()==1)
        return "YES";
    map<char, int> hash;
    for(int i=0;i<s.length();i++) {
        hash[s[i]]++;
    }
//    for(auto it=hash.begin();it!=hash.end();it++) {
//        cout<<it->first<<" "<<it->second<<endl;
//    }
    auto it=hash.begin();
    int frequency,flag = 1;
    int f1=it->second;
    it++;
    int f2=it->second;
    if(f1>f2) {
        if(f1 == f2+1) {
            frequency = f2;
            flag=0;
            it++;
        }
        else {
            return "NO";
        }
    }
    else if(f2>f1) {
        if(f2 == f1+1) {
            frequency = f1;
            flag=0;
            it++;
        }
        else {
            return "NO";
        }
    }
    else {
        frequency = f2;
        it++;
    }
    for(;it!=hash.end();it++) {
        if(it->second == 1 || it->second == frequency+1) {
            if(flag == 0) {
                return "NO";
            }
            else {
                flag = 0;
                continue;
            }
        }
        if(it->second != frequency) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    string s;
    cin >> s;
    string result = isValid(s);
    cout << result << endl;
    return 0;
}
