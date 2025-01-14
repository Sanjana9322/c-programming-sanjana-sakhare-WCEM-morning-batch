#include<stdio.h>
void main()
{
	int i,num,sum=0;
	printf("enter the value of sum");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d\n",i);
		sum+=i;
	}
	printf("%d",sum);
}

