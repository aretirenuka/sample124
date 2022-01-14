#include<stdio.h>
int main(){
    int a = 1, b = 2, c;
    for(c=-1;c<=1;c++){
    	a = a+c;
    	if(a<1 && b<a){
            continue;
        }
        else{
            a = a+1;
        }
        a = a+c;
    }
    printf("%d", a+b);
}