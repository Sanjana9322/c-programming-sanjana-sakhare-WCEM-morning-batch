#include<stdio.h>
void main()
{
	int i=1,num,table;
	printf("enter the numbers");
	scanf("%d",&num);
	while(i<=10)
	{
		table=num*i;
		printf("%d\n",table);
		i++;
	}
}
