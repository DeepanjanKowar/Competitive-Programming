#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,p,q;
        double a,b,c,ans=0;
        cin>>n;
        int x[n];
        for(int i=0;i<n;i++) {
            cin>>x[i];
        }
        sort(x,x+n);
        cin>>p>>q;
	for(int i=0;i<n/2;i++) {
		a=p*p+q*q+x[i]*x[n-1-i]-p*x[i]-p*x[n-1-i];
		b=sqrt((p-x[i])*(p-x[i])+q*q)*sqrt((p-x[n-1-i])*(p-x[n-1-i])+q*q);
		c=a/b;
		ans += acos(c);
	}
	cout<<fixed<<setprecision(12)<<ans<<endl;
    }
}
