#include <bits/stdc++.h>

using namespace std;

string gameOfStones(int n) {
    // Complete this function
    if(n%7 < 2)
        return "Second";
    return "First";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        string result = gameOfStones(n);
        cout << result << endl;
    }
    return 0;
}
