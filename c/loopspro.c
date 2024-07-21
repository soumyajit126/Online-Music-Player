#include<stdio.h>
int forloop(){
    int i;
    for (i=1;i<11;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
int whileloop(){
    int j=1;
    while(j<=5){
        printf("%d\n",j);
        j++;
    }
    return 0;
}   

int dowhileloop(){//sum loop using dowhile loop write 0.0 to end the program
double number,sum=0;
    do{
        printf("enter a number:");
        scanf("%lf",&number);
        sum+=number;
    }
    while(number!=0.0);
    printf("sum=%.2lf",sum);
    return 0;
}
int main(){
    forloop();
    whileloop();
    dowhileloop();
}