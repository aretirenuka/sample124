#include<stdio.h>
int main()
{
	char ch;
	FILE *fptr;
	fptr = fopen("datafile.txt", "r+");
	fprintf(fptr, "Welcome. ");
	fclose(fptr);
	fptr = fopen("datafile.txt", "r");
	while((ch = fgetc(fptr))!= EOF)
	{    
		printf("%c",ch);
	}
	fclose(fptr);
	return 0;
}