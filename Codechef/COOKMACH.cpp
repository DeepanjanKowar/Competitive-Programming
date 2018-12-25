#include<stdio.h>
int main()
{   
    int T,a,b,s;
    scanf("%d",&T);
    while(T>0)
    {
        scanf("%d%d",&a,&b);
        s=0;
        while(a!=b)
        {   
            if(b%a==0)
            {
                a=2*a;
                s++;
            }
            else if(a%2==0)
                {
                     a=a/2;
                     s++;
                }
                else
                {
                    a=(a-1)/2;
                    s++;
                }
        }
        printf("\n%d\n",s);
        T--;
    }
    return 0;
}
