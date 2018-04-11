vector<int> Solution::sieve(int A) {
    vector<int> primes(A+1,1);
    primes[0]=0;
    primes[1]=0;
    for(int i=2;i<=sqrt(A);i++) {
        if(primes[i]==1) {
            for(int j=2;i*j<=A;j++) {
                primes[i*j]=0;
            }
        }
    }
    vector<int> ans;
    for(int i=2;i<=A;i++) {
        if(primes[i])
            ans.push_back(i);
    }
    return ans;
}
