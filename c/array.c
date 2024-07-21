#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[5]={0};

    arr[3]=4;

    int i;

    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
