#include<stdio.h>
int main()
{
	int x;
	float y;
	scanf("%d%f",&x,&y);
	if(!(x%5!=0 || x+0.5>y))
		y=y-x-0.5;
	printf("%f",y);
	return 0;
}
