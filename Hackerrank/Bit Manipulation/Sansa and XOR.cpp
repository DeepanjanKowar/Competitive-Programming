#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,x;
    cin>>t;
    while(t--) {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(n%2==0)
            cout<<"0"<<endl;
        else {
            int sol=0;
            for(int i=0;i<n;i=i+2)
                sol = sol ^ arr[i];
            cout<<sol<<endl;
        }
    }
    return 0;
}
