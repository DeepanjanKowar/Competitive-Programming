#include<bits/stdc++.h>
using namespace std;
bitset<1000000> p;
bool isPrime(int n) { 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
    return true; 
} 
void seive() {
	p.set();
	p[0] = p[1] = 0;
	for (long long i = 2; i < 1000000; i++) {
		if (p[i])
			for (long long j = i * i; j < 1000000; j += i)
				p[j] = 0;
	}
}

bool solve(int n) {
	for (int i = 1; i*i*2 <= n; i++) {
		if (n-(2*i*i) > 0 && p[n-(2*i*i)]) {
			return true;
		}
	}
	return false;
}
int main() {
	seive();
	for(int i=9;i<32767;i++) {
		if(i%2 && !solve(i) && !isPrime(i)) {
		    cout<<i;
		    break;
		}
	}
	return 0;
}
