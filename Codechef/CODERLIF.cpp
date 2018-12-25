#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int x,n = 0, f=0;
	    for(int i=0;i<30;i++) {
	        cin>>x;
	        if(x) {
	            n++;
	        }
	        else {
	            n=0;
	        }
	        if(n==6) {
	            f=1;
	        }
	    }
	    if(f) {
	        cout<<"#coderlifematters\n";
	    }
	    else {
	        cout<<"#allcodersarefun\n";
	    }
	}
	return 0;
}
