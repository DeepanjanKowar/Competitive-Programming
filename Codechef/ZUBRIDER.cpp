#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int k=1;k<=t;k++) {
        long long kp,ks;
        cin>>kp>>ks;
        long long kval = kp*ks;
        long long n;
        cin>>n;
        vector<long long> g(n),s(n);
        for(int i=0;i<n;i++)
            cin>>g[i];
        for(int i=0;i<n;i++)
            cin>>s[i];
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        cout<<"Case "<<k<<":"<<" ";
        vector<long long> ansv(n);
        for(int i=0;i<n;i++)
        {
            long long gs = kval/g[i] + 1;
            int pos = lower_bound(s.begin(),s.end(),gs) - s.begin();
            //cout<<"gs="<<gs<<" pos="<<pos<<endl;
            if(n-pos-i<0) {
                ansv[i]=0;
            }
            else {
                ansv[i]=n-pos-i;
            }
        }
        long long ans=1;
        for(int i=0;i<n;i++)
        {
            ans = ((ans%mod)*(ansv[i]%mod))%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}
