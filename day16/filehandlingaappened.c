#include<stdio.h>
void main()
{
	char name[20]="ram";
	FILE*file= fopen("data.txt","a");
	if(file==NULL)
	{
		printf("enter the open file");
		return;
	}
	 fprintf(file,"%s",name);
	 printf("data is entered into file");
	 fclose(file);
}
