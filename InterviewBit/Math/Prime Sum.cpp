vector<int> Solution::primesum(int A) {
    vector<bool> prime(A,true);
    for (long long p=2; p*p<A; p++) {
        if (prime[p] == true) {
            for (long long i=p*2; i<A; i += p)
                prime[i] = false;
        }
    }
    vector<int> ans;
    for (long long p=2; p<=A; p++)
       if (prime[p] && prime[A-p]) {
          ans.push_back(p);
          ans.push_back(A-p);
          break;
       }
    return ans;
}
