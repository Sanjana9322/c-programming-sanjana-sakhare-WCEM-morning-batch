#include<stdio.h>
void main()
{
	int a=2,b=3,c;
	int *p1,*p2;

	 p1=&a;
	 p2=&b;
	 c=*p1-*p2;
	 printf("subtract of two no is %d",c);
}
