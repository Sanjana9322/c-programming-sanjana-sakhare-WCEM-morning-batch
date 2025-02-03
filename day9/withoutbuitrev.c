#include<stdio.h>

void main()
{
	char str[10];
	int j,i,len=0;
	printf("enter the name");
	//scanf("%s",str);
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		len=len+1;
	}
    for(j=len-1;str[j]!='\0';j--)
    {
    	printf("%c",str[j]);
	}
	
}
