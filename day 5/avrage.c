#include<stdio.h>
void main()
{
	int i=1,n,sum=0,avg;
	
	while(i<=10)
	{
	printf("enter the numbers");
	scanf("%d\n",&n);
		
	     sum=sum+n;
		avg=sum/10;
		i++;
	}
	printf("the sum is %d\n",sum);
	printf("the avrage is %d\n",avg);
}
