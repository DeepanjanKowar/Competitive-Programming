#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int xxxxx(int x, int n, int a) {
    int t;
    t = pow(a,n);
    if (t > x) {
        return 0;
    }
    if (t == x) {
        return 1;
    }
    return xxxxx(x, n, a+1) + xxxxx(x-t, n, a+1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int x,n;
    cin>>x>>n;
    cout<<xxxxx(x,n,1);
    return 0;
}
