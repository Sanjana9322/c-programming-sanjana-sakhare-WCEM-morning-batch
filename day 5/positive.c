#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	while(num<0)
	{
		printf("enter the positive number try again");
		scanf("%d",&num);
	}
}
