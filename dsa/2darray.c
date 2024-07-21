#include<stdio.h>
#include<conio.h>

int main(){
    int arr[2][3];

    int i,j;
    int counter=1;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            arr[i][j]=counter;
            counter=counter+1;

        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}