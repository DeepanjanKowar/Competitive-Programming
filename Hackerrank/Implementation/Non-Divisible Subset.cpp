#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k,a,ans=0;
    cin>>n>>k;
    map<int,int> hash;
    for(int i=0;i<n;i++) {
        cin>>a;
        hash[a%k]++;
    }
    if(hash[0]!=0)
        ans++;
    for(int i=1;i<=k/2;i++) {
        if(i != k-i) {
            ans = ans + max(hash[i],hash[k-i]);
        }
        else
            ans++;
    }
    cout<<ans;
    return 0;
}
