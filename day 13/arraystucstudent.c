#include<stdio.h>
struct student{
	char name[20];
	int rollno;
	int marks;
};
void main()
{
	int i;
	struct student s[3];
	printf("enter information of student:-");
	for(i=0;i<3;i++)
	{
		printf("enetr the name");
		scanf("%s",s[i].name);
		printf("enetr the rollno");
		scanf("%d",&s[i].rollno);
		printf("enetr the marks");
		scanf("%d",&s[i].marks);
}
printf("display student information");
for(i=0;i<3;i++)
{
	printf("name :-%s\n",s[i].name);
	printf("rollno :-%d\n",s[i].rollno);
	printf("marks:-%d\n",s[i].marks);
}
	}
