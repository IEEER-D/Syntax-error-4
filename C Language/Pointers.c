// arthimetic with pointers

#include<stdio.h>

int main(){

//    int a=10;
//    int *ptr_a = &a;
//    *ptr_a += 10;
//    printf("%d\n",*ptr_a); // *ptr_a is the same as a cuse it has the address of it
//    printf("%d\n",*&a);

//    int arr[3] = {5,7,8};
//    printf("%d\n",*(arr+2));
//    printf("%d\n",arr[2]);





    int tempreatures[5];
    int i;
    int *arr_ptr = tempreatures;

//    printf("%x\n",tempreatures); // name of the arry acts as a pointer (have the value of the first address)
//    printf("%x\n",arr_ptr);
//    for(i=0;i<5;i++){
//        printf("%d\n",tempreatures[i]); // garbage values
//    }

    for(i=0;i<5;i++){
        printf("Enter the value of %d array:\n",i+1);
        scanf("%d",arr_ptr+i); // arr_ptr+i
    }
    for(i=0;i<5;i++){
        printf("Value of %d in array is %d\n",i+1,*(arr_ptr+i)); //arr_ptr++;
    }



    return 0;

}
