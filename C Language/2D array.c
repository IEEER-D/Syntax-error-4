#include<stdio.h>

int main(){
    int twoD_array[5][5];
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("2D_array row %d, colomn %d = ",i+1,j+1);
            scanf("%d",&twoD_array[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("2D_array row %d, colomn %d = %d \n",i+1,j+1,twoD_array[i][j]);
        }
    }



    return 0;

}

