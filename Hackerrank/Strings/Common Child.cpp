#include <bits/stdc++.h>

using namespace std;

int lcs(string X, string Y) {
	int m = X.length(), n = Y.length();
	int L[2][n+1];
	bool bi;
    for(int i = 0 ; i < 2 ; i++)
        for(int j = 0 ; j < n+1 ; j++ )
            L[i][j] = 0;
	for (int i=0; i<m; i++) {
		bi = i&1;
		for (int j=1; j<=n; j++) {
		    if (X[i] == Y[j-1]) {
				L[bi][j] = L[1-bi][j-1] + 1;
		    }
			else
				L[bi][j] = max(L[1-bi][j], L[bi][j-1]);
		}
	}
	return L[bi][n];
}
int main() {
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int result = lcs(s1, s2);
    cout << result << endl;
    return 0;
}
