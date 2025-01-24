#include<stdio.h>
void main()
{
	char str[20],*p1;
	p1=&str[0];
	int v=0,c=0;
	printf("enter the name:-");
	//scanf("%s",*p1);
	gets(str);
	for(;*p1!='\0';*p1++)
	{
		if(*p1=='a'||*p1=='e'||*p1=='i'||*p1=='o'||*p1=='u')
		{
			v=v+1;
		}
		else
		{
			c=c+1;
		}
	}
	printf("vowel count %d",v);
	printf("consonant count %d",c);
	
}
