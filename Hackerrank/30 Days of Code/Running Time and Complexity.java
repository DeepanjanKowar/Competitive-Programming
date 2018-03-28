#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool checkPrime( int in_numb )
{
    if( in_numb == 0 || in_numb == 1 )
    {
        return false;
    }
    
    //  If a number is divisable by another number less or equal to the square root of the first number... it is NOT prime.
    int sq = sqrt( in_numb );
    for (int i = 2; i <= sq; i++)
    {
        //if divisible
        if (in_numb % i == 0)
        {
            return false;
        }
    }
    
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int howMany;
    
    cin >> howMany;
        
    for( int i = 0; i < howMany; i++ )
    {
        int numb;
        cin >> numb;
                
        bool b =checkPrime( numb );
        if( b )
            cout << "Prime" << endl;
        else
            cout << "Not prime" << endl;
    }  
    
    return 0;
}
