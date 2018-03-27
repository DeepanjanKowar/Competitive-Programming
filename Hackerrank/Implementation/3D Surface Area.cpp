#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int h,w;
    cin>>h>>w;
    int a[h][w];
    double area = 2*h*w;
    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            cin>>a[i][j];
            if(i==0 || i==h-1) {
                    area = area + a[i][j];
            }
            if(j==0 || j==w-1) {
                area = area + a[i][j];
            }
        }
    }
    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            if(i+1 < h)
                area = area + abs(a[i][j]-a[i+1][j]);
            if(j+1 < w)
                area = area + abs(a[i][j]-a[i][j+1]);
        }
    }
    if(h==1) {
        for(int i=0;i<w;i++)
            area = area +a[0][i];
    }
    if(w==1) {
        for(int i=0;i<h;i++)
            area = area +a[i][0];
    }
    cout<<area;
    return 0;
}
