#include<stdio.h>
void main()
{
	int rollno;
	int marks;
	FILE*file= fopen("data.txt","r");
	if(file==NULL)
	{
		printf("error the open file");
		return;
	}
      fscanf(file,"%d\n",&rollno);
	 fscanf(file,"%d\n",&marks);
	 printf("roll no is%d\n",rollno);
	 printf("marks no is%d\n",marks);
	 fclose(file);
}
