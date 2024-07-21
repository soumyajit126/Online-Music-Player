#include<stdio.h>
int main()
{
    int* cwh,c;

    c=22;
    printf("address of c:%p\n",cwh);
    printf("value of c: %d\n\n",*cwh);
    cwh=&c;
    printf("address of cwh:%p\n",cwh);
    printf("content of pointer cwh:%d\n\n",*cwh);
    c=11;
    printf("address of pointer cwh:%p\n",cwh);
    printf("content of pointer cwh:%d\n\n",*cwh);
    *cwh=2;
    printf("address of c:%p\n",&c);
    printf("value of c:%d\n\n",c);
    return 0;
}//cwh=&c then *cwh=c  and &c=cwh 