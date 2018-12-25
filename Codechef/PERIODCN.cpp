#include<bits/stdc++.h>
using namespace std;

vector<int> v;

void compute(int len, int per) {
    int n=0,b=0;
    for(int i=0;i<len;i++) {
        if(i%per==0) {
            b = b^1;
        }
        n = (n<<1)|b;
    }
    v.push_back(n);
}

void precompute() {
    for(int i=1;i<32;i++) {
        for(int j=1;j<=i;j++) {
            if(i%j==0) {
                compute(i,j);
            }
        }
    }
}
int main() {
    precompute();
    int t;
    cin>>t;
    while(t--) {
        int l,r;
        cin>>l>>r;
        cout<<lower_bound(v.begin(),v.end(),r+1)-lower_bound(v.begin(),v.end(),l)<<endl;
    }
}
