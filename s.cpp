#include<stdio.h>
int main()
{
    int n=10;
    while(1)
    {
        if(n==1)
            break;
        if(n%2==0)
            n=n/2;
        else
            n=3*n+1;
        printf("%d ",n);
    }
    return 0;
}