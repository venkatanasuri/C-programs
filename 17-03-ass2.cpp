#include<stdio.h>
int main()
{
	int l,b,x;
	int area;
	scanf("%d%d",&l,&b);
	x=area(l,b);
	printf("\nArea=%d",x);
}
area(int l,int b);
{
	int area;
	area=l*b;
	return area;
}
