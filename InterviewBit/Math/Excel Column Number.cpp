int Solution::titleToNumber(string A) {
    int ans=0;
    int i=A.length()-1,j=0;
    while(i>=0) {
        ans += pow(26,j)*(A[i]-'A'+1);
        j++;
        i--;
    }
    return ans;
}
