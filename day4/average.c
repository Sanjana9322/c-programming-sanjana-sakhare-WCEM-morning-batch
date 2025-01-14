#include<stdio.h>
void main()
{
	int i,n,sum=0,avg;
	
	for(i=1;i<=10;i++)
	{
	printf("enter the numbers");
	scanf("%d\n",&n);
		
	     sum=sum+n;
		avg=sum/10;
	
	}
	printf("the sum is %d\n",sum);
	printf("the avrage is %d\n",avg);
}
