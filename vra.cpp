#include<stdio.h>
int main(){
    int i, j, n, num = 1;
    for(i=1;i<=n;i++){
    	for(j=1;j<=i;j++){
            printf("%d ", num++);
        }
        printf("\n");
    }
}