#include<stdio.h>
struct book{
	char titel[20];
	char author[20];
	int price;	
};
void main()
{
	int i;
	struct book B[5];
	printf("enter the information of book:-");
	for (i=0;i<5;i++)
	{
		printf("enter the titel");
		scanf("%s",B[i].titel);
		printf("enter the author");
		scanf("%S",B[i].author);
		printf("enter the price");
		scanf("%d",&B[i].price);
	}
	printf("display the book information");
	for(i=0;i<5;i++)
	{
		printf("titel:-%s\n",B[i].titel);
		printf("author:-%d\n",B[i].author);
		printf("price:-%d\n",B[i].price);
		
	}
	
}
