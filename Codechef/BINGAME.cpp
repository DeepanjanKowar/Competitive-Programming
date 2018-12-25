#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0,c1=0;
        int a;
        long sum=0;
        for(int i=0;i<n;i++){
            cin>>a;
            sum+=a;
            if(a%3!=0){
                if(a%3==1){
                    c1++;
                }
                count++;
            }
        }
        //cout<<count<<" ";
        if(sum%3!=0)
        {
            cout<<n<<endl;
        }
        else
        {
        if(count==1){
            if(n==1){
                cout<<1<<endl;
            }
            else{
                cout<<n-1<<endl;
            }
        }
        else if(count==0){
            cout<<0<<endl;
        }
        else{
            if((c1==1&&(count==2)))
            cout<<n-1<<endl;
            else
            cout<<n<<endl;
        }
        }
        
    }
}
