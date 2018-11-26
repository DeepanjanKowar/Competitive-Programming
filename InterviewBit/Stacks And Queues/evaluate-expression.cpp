int Solution::evalRPN(vector<string> &A) {
    stack<int> s;
    for(int i=0;i<A.size();i++) {
        if(A[i]=="*" || A[i]=="+" || A[i]=="/" || A[i]=="-") {
            int first = s.top();
            s.pop();
            int second = s.top();
            s.pop();
            if(A[i]=="+") {
                s.push(first+second);
            }
            else if(A[i]=="-") {
                s.push(second-first);
            }
            else if(A[i]=="/") {
                s.push(second/first);
            }
            else if(A[i]=="*") {
                s.push(first*second);
            }
        }
        else {
            s.push(atoi(A[i].c_str()));
        }
    }
    return s.top();
}
