#include<stdio.h>
void main()
{
	int num;
	printf("enter a positive number");
	scanf("%d",&num);
	for(;num<0;)
	{
		printf("enter the positive  try again");
		scanf("%d",&num);
	}
}
