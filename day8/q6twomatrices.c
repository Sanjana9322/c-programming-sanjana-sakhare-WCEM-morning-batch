#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],i,j,equal=1;
	printf("enter element of matrices a");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);	
		}
	}
	printf("enter element of the matrices b");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				equal=0;
			}
		}
	}
	if(equal==1)
	{
		printf("the matrices are equal");
	}
		else {
		
		
			printf("the matrices are  not equal");
		
}
}
