#include<stdio.h>
int * get_evens_to_10();
int main(){
    int i =0;
    int *ptr = get_evens_to_10();
    for(i=0;i<6;i++)
    printf("%d\n",*(ptr+i));

    return 0;

}

int * get_evens_to_10(){

    static int arr[6];
    int i=0;

    while(i<=10){ //0 1 2
            if(i%2==0)
            arr[i/2]=i;  //0 0
                        // 1 2
                        //2 4
                        //3 6
                        //4 8
                        //5 10
        i++;
    }
    return arr;

}
