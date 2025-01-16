#include<stdio.h>
void main()
{
	int i=1,cube,num;
	printf("enter the number");
	scanf("%d",&num);
	while(i<=num)
	{
		cube=i*i*i;
		
		printf("the cube %d\n",cube);
		i++;
	}
	
}
