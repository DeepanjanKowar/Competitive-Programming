#include<bits/stdc++.h>
int Solution::reverse(int x) {
    bool negative = false;
    if(x < 0)  {
        negative = true;
        x = -x;
    }
    int reversed = 0;
    while(x > 0) {
        int maxVal = (INT_MAX-(x%10))/10;
        if(reversed>maxVal){
            return 0;
        }
        
        reversed = reversed*10 + x%10;
        
        x /= 10;
    }
    if(negative) 
        reversed = -reversed;
    return reversed;
}
