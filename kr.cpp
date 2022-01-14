#include<stdio.h>
int main()
{
    int a = 1, b = 1, c;
    for(c=3;c<=6;c++)
	{
    	a = a + b;
    	if(a<0 || b>0)
		{
            b = 10;
            a = 11;
            continue;
        }
        b = a;
        a = b;
    }
    printf("%d", a+b);
}