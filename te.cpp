#include<stdio.h>
   #include<stdlib.h>
 
   int main()
   {
       int ret;
       int *ptr;
       ptr = (int *)malloc(sizeof(int)*10);
       free(ptr);
       free(ptr);
       return 0;
   }
