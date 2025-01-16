#include<stdio.h>
void main()
{
	int a[3]={1,5,8},i,min=a[0];
	for(i=0;i<3;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	
	}
	printf("minimax value is %d",min);
}
