int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int steps = 0;
    if(A.size() <= 1)
        return 0;
    int startX = A[0], startY = B[0];
    for(int i=1;i<A.size();i++) {
        int x = abs(startX-A[i]);
        int y = abs(startY-B[i]);
        startX = A[i];
        startY = B[i];
        steps += max(x,y);
    }
    return steps;
}
