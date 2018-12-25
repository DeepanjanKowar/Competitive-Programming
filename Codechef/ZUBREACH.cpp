#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int j=1;j<=t;j++) {
        int m,n,rx,ry,len,x=0,y=0;
        string str;
        cin>>m>>n>>rx>>ry>>len>>str;
        
        for(int i=0;i<len;i++) {
            switch(str[i]) {
                case 'U' :  y++;
                            break;
                case 'D' :  y--;
                            break;
                case 'L' :  x--;
                            break;            
                case 'R' :  x++;
                            break;
            }
        }
        if(x==rx && y==ry) {
            cout<<"Case "<<j<<": REACHED\n";
        }
        else if(x>m || x<0 || y>n || y<0) {
            cout<<"Case "<<j<<": DANGER\n";
        }
        else {
            cout<<"Case "<<j<<": SOMEWHERE\n";
        }
    }
}
