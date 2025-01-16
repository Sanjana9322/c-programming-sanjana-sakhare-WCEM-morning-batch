#include<stdio.h>
void main()
{
	int a[5]={1,2,3,4,5};
	int newarray[5],k=0,i;
	for(i=0;i<5;i++)
	{
		if(a[i]%2-1)
		{
		newarray[k]=a[i];
			k++;	
		}
	
	}
	for(i=0;i<5;i++){
		if(a[i]%2){
			newarray[k]=a[i];
			k++;
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d",newarray[i]);
	}
	
}
