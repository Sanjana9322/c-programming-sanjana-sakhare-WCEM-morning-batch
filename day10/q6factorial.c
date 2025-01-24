#include<stdio.h>
void main()
{
    int num,*p1,i;
    int fact=1;

    p1=&fact;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
	{
        *p1=*p1*i;

    }
    printf("%d",*p1);
}
