#include<stdio.h>

int factorial(int);

int main(){
int x;
scanf("%d",&x);
    printf("%d",factorial(x));
    return 0;


}

int factorial(int a){
    if (a==1)
        return 1;
    else
        return a*factorial(a-1);


}
