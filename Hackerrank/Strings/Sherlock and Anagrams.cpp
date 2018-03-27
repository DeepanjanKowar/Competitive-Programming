#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

map<string, int> m;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        map<string,int> m;
        for(int i=0;i<s.size();i++) {
            for(int j=1;j+i-1<s.size();j++) {
                string a = s.substr(i,j);
                sort(a.begin(),a.end());
                m[a]++;
            }
        }
        int result=0;
        for(auto it=m.begin();it!=m.end();it++) {
            result = result+ it->second*(it->second-1)/2;
        }
        cout<<result<<endl;
    }
}
