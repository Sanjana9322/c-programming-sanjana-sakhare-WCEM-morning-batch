#include<stdio.h>
void main()
{
	int i,num,fact=1;
	printf("enter the numbers");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact*=i;
		printf("%d\n",i);
	
	}
	printf("\n fact =%d",fact);
}
