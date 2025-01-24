#include<stdio.h>
void main()
{
	int A[3][3],i,j;
	printf("enter elements of an array");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter array is\n: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	
}
