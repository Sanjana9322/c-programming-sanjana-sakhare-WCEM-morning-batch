#include<stdio.h>
void main()
{
	int i=1 ,num ,sum=0;
	printf("enter the natural numbers");
	scanf("%d",&num);
	while(i<=num)
	{
		printf("%d\n",i);
		sum=sum+i;
		i++;
	}
	printf("%d\n",sum);
}
