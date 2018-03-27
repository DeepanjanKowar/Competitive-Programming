#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k,p;
        cin>>n>>k;
        vector<int> arr(k+1,0);
        int ans=0;
        arr[0]=1;
        for(int i=0;i<n;i++) {
            cin>>p;
            for(int j=1;j<=k;j++) {
                if(j%p == 0 || arr[j-p] == 1) {
                    arr[j] = 1;
                    ans = max(ans,j);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

