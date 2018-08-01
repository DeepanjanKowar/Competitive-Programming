/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::merge(vector<Interval> &A) {
    if (A.size() == 0) {
        return A;
    }
    vector<Interval> newOne;
    int count = 0;
    bool shouldExit = true;
    do
    {
        if (count > 0)
        {
            A = newOne;
            newOne.clear();
        }
        Interval tmp = A[0];
        bool addTmpLast = true;
        shouldExit = true;
        for (int i = 1; i < A.size(); ++i)
        {
            if (tmp.end < A[i].start)
            {
                newOne.push_back(tmp);
                tmp = A[i];
                addTmpLast = false;
            }
            else if (A[i].end < tmp.start)
            {
                newOne.push_back(A[i]);
                addTmpLast = true;
                shouldExit = false;
            }
            else
            {
                shouldExit = false;
                
                if (tmp.start > A[i].start)
                {
                    tmp.start = A[i].start;
                }
                
                if (tmp.end < A[i].end)
                {
                    tmp.end = A[i].end;
                }
                
                addTmpLast = true;
            }
        }
        
        if (addTmpLast)
        {
            newOne.push_back(tmp);
        }
        else
        {
            newOne.push_back(A[A.size() - 1]);
        }
        
        ++count;
    } while (!shouldExit);
    
    return newOne;
}
