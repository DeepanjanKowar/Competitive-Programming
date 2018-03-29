#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(const pair<int,pair<long,long>> &a, const pair<int,pair<long,long>> &b)
{
    return ((a.second.first+a.second.second) < (b.second.first+b.second.second));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<pair<int, pair<long,long>>> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i].second.first>>v[i].second.second;
        v[i].first = i+1;
    }
    stable_sort(v.begin(),v.end(),compare);
    for(int i=0;i<n;i++)
        cout<<v[i].first<<" ";
    return 0;
}
