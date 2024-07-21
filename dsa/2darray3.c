#include<stdio.h>
#include<conio.h>

int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};

    int i,j;
    printf("%p\n\n",arr);
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%p\n",&arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}