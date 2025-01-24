#include<stdio.h>
struct employes{
	char name[20];
    int employeid;
    int salary;	
};
void main()
{
	int i;
	struct employes E[3];
	printf("enter the information of employes:-");
	for (i=0;i<3;i++)
	{
		printf("enter the name");
		scanf("%s",E[i].name);
		printf("enter the employeid");
		scanf("%d",&E[i].employeid);
		printf("enter the salary");
		scanf("%d",&E[i].salary);
	}
	printf("display the employes information");
	for(i=0;i<3;i++)
	{
		printf("name:-%s\n",E[i].name);
		printf("emloyesid:-%d\n",E[i].employeid);
		printf("salary:-%d\n",E[i].salary);
		
	}
	
}
