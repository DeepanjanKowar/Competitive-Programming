#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int count_alternating(const string &s, char c, char d) {
    int n = 0;
    bool last_c = false;
    bool last_d = false;
    for (char a : s) {
        if (a == c) {
            if (last_c) return 0;
            n++;
            last_c = true;
            last_d = false;
        }
        if (a == d) {
            if (last_d) return 0;
            n++;
            last_c = false;
            last_d = true;
        }
    }
    return n;
}



int twoCharaters(string s) {
    set<char> set;
    for(char a : s){
        set.insert(a);
    }
    int m = 0;
    if(s.length() > 1){
        for( auto a : set){
            for(auto b : set){
                if(a == b) continue;
                int n = count_alternating(s,a,b);
                if(n > m) m = n;
            }
        }
    }
    return m;
}

int main() {
    int l;
    cin >> l;
    string s;
    cin >> s;
    int result = twoCharaters(s);
    cout << result << endl;
    return 0;
}
