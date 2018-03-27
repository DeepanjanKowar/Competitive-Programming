#include <bits/stdc++.h>

using namespace std;

long getWays(long n, vector < long > c){
    // Complete this function
    int i,j;
    long T[c.size()][n+1];
    T[0][0]=1;
    for(i=1;i<n+1;i++) {
        if(i%c[0] != 0)
            T[0][i] = 0;
        else
            T[0][i] = 1;
    }
    for(i=1;i<c.size();i++) {
        for(j=0;j<n+1;j++) {
            if(j>=c[i]) {
                T[i][j] = T[i-1][j] + T[i][j-c[i]];
            }
            else
                T[i][j] = T[i-1][j];
        }
    }
    return T[i-1][j-1];
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<long> c(m);
    for(int c_i = 0; c_i < m; c_i++){
       cin >> c[c_i];
    }
    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'
    long ways = getWays(n, c);
    cout<<ways;
    return 0;
}
