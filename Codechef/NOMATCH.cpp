#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<long long> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        sort(v.begin(),v.end());
        long long ans = 0;
        for(int i=0;i<n/2;i++) {
            ans += abs(v[i]-v[n-i-1]);
        }
        cout<<ans<<endl;
    }
}
