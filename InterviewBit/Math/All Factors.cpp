vector<int> Solution::allFactors(int A) {
    vector<int> ans;
    for(int i=1;i<=sqrt(A);i++) {
        if(A%i==0) {
            ans.push_back(i);
        }
    }
    int n= ans.size();
    for(int i=n-1;i>=0;i--) {
        if(ans[i] != sqrt(A))
            ans.push_back(A/ans[i]);
    }
    return ans;
}
