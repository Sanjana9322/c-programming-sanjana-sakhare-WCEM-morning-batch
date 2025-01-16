#include<stdio.h>
void main()
{
	char i,j;
	for(i=1;i<=4;i++)
	{
		for(j='E';j>='A';j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
