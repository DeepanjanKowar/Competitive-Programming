vector<int> Solution::plusOne(vector<int> &A) {
    reverse(begin(A),end(A));
    A.push_back(0);
    for(int i =0 ; i<A.size() ; i++) {
        A[i]++;
        if(A[i] == 10) {
            A[i] = 0;
        }
        else {
            break;
        }
    }
    while(A[A.size()-1]==0) {
        A.pop_back();
    }
    reverse(begin(A),end(A));
    return A;
}
