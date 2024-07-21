#include<stdio.h>
int main(){
    char grade ='E';

    switch(grade){
        case 'A':
           printf("Excellent!\n");
           break;
        case 'B':
        case 'C':
           printf("Well done\n");
           break;
        case 'D':
           printf("you passed\n");
           break;
        case 'E':
           printf("better try again\n");
           break;
        default:
           printf("invalid grades\n");
    }

    printf("your grade is %c\n",grade);

    return 0;
}