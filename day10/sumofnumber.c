#include<stdio.h>
void main()
{
	int a[7]={1,2,3,4,5,6,7},*p1;
	int i,sum=0;
	p1=&a[0];
	for(i=0;i<7;i++)
	{
		sum=sum+*p1;
		p1++;
	}
	printf("enter the all no.addition %d",sum);
}
