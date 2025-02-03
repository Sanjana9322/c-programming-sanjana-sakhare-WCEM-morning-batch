#include<stdio.h>
#include<string.h>
int main()
{
	char name[10];
	printf("enter the your name");
	//scanf("%s",name);
	gets(name);
	printf("%s",name);
}
