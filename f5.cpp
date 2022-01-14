
#include<stdio.h>
int main()
{
    int n=10,i=1;
    while(i<n)
    {
        if(i%3==0)
        {
            continue;
        }
        printf("%d ",i);
        i++;
    }
    return 0;
}