#include<stdio.h>
#include<conio.h>

int main(){
    int arr[5]={1,2};

    int i;
    arr[3]=4;
    for(i=0;i<5;i++){
        printf("%p\n",&arr[i]);
    }//%p for addresses
    return 0;
}