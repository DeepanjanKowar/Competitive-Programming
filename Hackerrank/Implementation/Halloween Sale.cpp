#include <bits/stdc++.h>

using namespace std;

int howManyGames(int p, int d, int m, int s) {
    int count = 0;
    if(s<p) {
        return count;
    }
    while(p>m && s>p) {
        count++;
        s=s-p;
        p=p-d;
    }
    while(s>=m && p<=m) {
        count++;
        s=s-m;
    }
    return count;
}

int main() {
    int p;
    int d;
    int m;
    int s;
    cin >> p >> d >> m >> s;
    int answer = howManyGames(p, d, m, s);
    cout << answer << endl;
    return 0;
}
