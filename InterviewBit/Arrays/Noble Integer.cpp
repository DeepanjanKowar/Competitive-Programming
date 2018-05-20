int Solution::solve(vector<int> &A) {
    sort(begin(A),end(A));
    int size = A.size();
    for(int i=0;i<size;i++) {
        if((size-i-1) == A[i]) {
            if(i!=size-1) {
                if(A[i]==A[i+1]) {
                    continue;
                }
            }
            return 1;
        }
    }
    return -1;
}
