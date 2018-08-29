#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
		cin>>n;
		int grid[2*n][2*n];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin>>grid[i][j];
				grid[i+n][j]=grid[i][j];
				grid[i][j+n]=grid[i][j];
				grid[i+n][j+n]=grid[i][j];
			}
		}
		for(int i=1;i<2*n;i++) {
		    for(int j=0;j<2*n;j++) {
		        grid[i][j]=grid[i][j]+grid[i-1][j];
		    }
		}
		for(int j=1;j<2*n;j++) {
		    for(int i=0;i<2*n;i++) {
		        grid[i][j]=grid[i][j]+grid[i][j-1];
		    }
		}
		int maxSum=INT_MIN, sum=INT_MIN;
		for(int i=0; i<n; i++) {
		    for(int j=0; j<n; j++) {
			    for(int l=i; l<n+i && l<2*n; l++) {
			        for(int m=j; m<n+j && m<2*n; m++){
				        sum = grid[l][m];
				        if(i>0) sum -= grid[i-1][m];
				        if(j>0) sum -= grid[l][j-1];
				        if(i>0 && j>0) sum += grid[i-1][j-1];
				        maxSum = max(maxSum,sum);
			        }
			    }
		    }
		}
		cout<<maxSum<<endl;
	}
	return 0;
}
