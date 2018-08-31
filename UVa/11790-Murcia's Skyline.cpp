#include<bits/stdc++.h>
using namespace std;
int main() {
    int T, n, height[5000], width[5000], li[5000], ld[5000], maxi, maxd, tempi, tempd;
    cin>>T;
    for(int t=1; t<=T; t++) {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>height[i];
        for(int i=0;i<n;i++)
            cin>>width[i];
        maxi=maxd=0;
        for(int i=0;i<n;i++) {
            tempi=tempd=li[i]=ld[i]=width[i];
            for(int j=0; j<i; j++) {
                if(height[j]<height[i])
                    li[i]=max(li[i],tempi+li[j]);
                if(height[j]>height[i])
                    ld[i]=max(ld[i],tempd+ld[j]);
            }
            maxi=max(maxi, li[i]);
            maxd=max(maxd, ld[i]);
        }
        if(maxi>=maxd)
            cout<<"Case "<<t<<". Increasing ("<<maxi<<"). Decreasing ("<<maxd<<")."<<endl;
        else
            cout<<"Case "<<t<<". Decreasing ("<<maxd<<"). Increasing ("<<maxi<<")."<<endl;
    }
    return 0;
}
