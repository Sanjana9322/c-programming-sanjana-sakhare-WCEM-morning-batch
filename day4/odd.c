#include<stdio.h>
void main()
{
	int i,num,sum=0;
	printf("enter the numbers");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if (i%2!=0)
		{
			printf("%d\n",i);
			sum=sum+i;

		}
	
	}
	printf("\n sum =%d",sum);
}
