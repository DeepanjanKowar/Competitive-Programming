#include <bits/stdc++.h>

using namespace std;

int SieveOfEratosthenes(int n) {
    vector<bool> prime(n+1 , true);
    for (int p=2; p*p<=n; p++) {
        if (prime[p] == true) {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    int count = 0;
    for (int p=2; p<=n; p++)
       if (prime[p])
          count++;
    return count;
}

int redJohn(int n) {
    // Complete this function
    int count[41] = {0};
    count[1] = count[2] = count[3] = 1;
    count[4] = 2;
    for(int i=5;i<=n;i++) {
        count[i] = count[i-1] + count[i-4];
    }
    return(SieveOfEratosthenes(count[n]));
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = redJohn(n);
        cout << result << endl;
    }
    return 0;
}
