#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector <bool> a(10e7);
    for(int i=0;i<s.length();i++) {
        int sum=0;
        for(int j=0;j<s.length()-i,s[i]==s[i+j];j++)
            sum += s[i+j]-96;                                 
         a[sum]=true;                                       
    }
    for(int a0 = 0; a0 < n; a0++)                           
    {   int x;
        cin >> x;
        if(a[x]) 
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;   
    }
    return 0;
}
