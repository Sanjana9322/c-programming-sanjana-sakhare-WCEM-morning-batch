#include<stdio.h>
void main()
{
	char name[20],*p1;
	   int l=0;
	   printf("enter a number");
	   scanf("%d",name);
	   for(p1=&name[0];*p1!='\0';p1++)
	   {
	   	l++;
	   }
	   printf("%d",l);
	   
	
}
