bool compare(string a, string b) {
    return (a+b > b+a);
}
string Solution::largestNumber(const vector<int> &A) {
    string s;
    vector<string> srr;
    for(int i=0;i<A.size();i++) {
        srr.push_back(to_string(A[i]));
    }
    std::sort(begin(srr),end(srr),compare);
    for(int i=0;i<A.size();i++) {
        s = s+srr[i];
    }
    if(s[0]=='0') {
        return "0";
    }
    return s;
}
