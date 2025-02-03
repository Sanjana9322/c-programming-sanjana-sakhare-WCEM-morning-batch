#include<stdio.h>
void main()
{
	int rollno =101;
	int marks =90;
	FILE*file= fopen("data.txt","w");
	if(file==NULL)
	{
		printf("enter the open file");
		return;
	}
	 fprintf(file,"%d\n",rollno);
	 fprintf(file,"%d\n",marks);
	 printf("data is entered into file");
	 fclose(file);
}
