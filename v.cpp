#include<stdio.h>
int main()
{
	unsigned char ch;
	FILE *fp;
	fp = fopen("datafile.txt", "r");
	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
	}
	printf(" Thank you.");
	fclose(fp);
	return 0;
}