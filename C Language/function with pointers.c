#include<stdio.h>

int main(){

    int x=5;
    printf("value of x: %d , after the call: %d\n",x,func1(&x));
    printf("value of x: %d , after the call: %d\n",x,func0(x));


    return 0 ;
}
int func0(int a){ //pass by value
    return a +=1;
}
int func1(int * p){ //pass by address
    return *p +=1;

}
