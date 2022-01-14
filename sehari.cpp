#include<stdio.h>
int main()
{
	int num[4];
	int i = 0, tot = 0;
	FILE *fptr;
	fptr = fopen("int_numbers.txt", "r");
	if(fptr == NULL)
    {
		printf("File not exist");
    }
	for(i = 0; i < 4; i++)
    {
		fscanf(fptr, "%d,", &num[i]);
    }
	for(i = 0; i < 4; i++)
	{
		printf("%d ", num[i]);
		tot = tot + num[i];
	}
	printf("tot = %d", tot);
	fclose(fptr);
	return 0;
}