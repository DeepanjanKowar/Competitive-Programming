#include<bits/stdc++.h>
using namespace std;
#define INF (int) 1e8

int main() {
    int n,ans;
    cin>>n;
    int cost;
    string juice;
    map<string,int> table;
    table["A"]=INF;
    table["B"]=INF;
    table["C"]=INF;
    table["AB"]=INF;
    table["BC"]=INF;
    table["AC"]=INF;
    table["ABC"]=INF;
    for (int i=0; i<n; i++) {
        cin>>cost;
        cin>>juice;
        sort(juice.begin(), juice.end());
        table[juice] = min(table[juice],cost);
    }
    ans = table["A"]+table["B"]+table["C"];
    ans = min(ans,table["AB"]+table["C"]);
    ans = min(ans,table["AC"]+table["B"]);
    ans = min(ans,table["BC"]+table["A"]);
    ans = min(ans,table["AB"]+table["AC"]);
    ans = min(ans,table["AB"]+table["BC"]);
    ans = min(ans,table["AC"]+table["BC"]);
    ans = min(ans,table["ABC"]);
    if (ans == (int)1e8) {
        ans = -1;
    }
    cout<<ans<<endl;
    return 0;
}
