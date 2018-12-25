#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=1;i<=t;i++) {
		int l,k;
		cin>>l>>k;
		if(k<=l)
			cout<<"Case "<<i<<": "<<((l-k+1)*(l-k+2))/2<<endl;
		else
			cout<<"Case "<<i<<": "<<0<<endl;
	}
	return 0;
}
