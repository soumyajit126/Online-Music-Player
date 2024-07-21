// #include<stdio.h>
// int forloop(){
//     int i;
//     for (i=1;i<11;i++)
//     {
//         printf("%d",i);
//     }
//     return 0;
// }
// int whileloop(){
//     int j=1;
//     while (j<=10)
//     {
//         printf("%d\n",j);
//         j++;
//     }
//     return 0;
        
// }
// int main(){
    
//     forloop();
//     whileloop();
// }
#include<stdio.h>
int forloop(){
    int i;
    for(i=0;i<11;i++){
        printf("%d\n",i);

    }return 0;
}
int whileloop(){
    int j=11;
    while(j<=20){
        printf("%d\n",j);
        j++;
    } return 0;
    
}
// int dowhileloop(){
//     int k=21;
//     do{
//         printf("%d\n",k);
//         k++;
//     }
//     while(k<=30);
// }
int dowhileloop(){//end by typing 0.0
double number,sum=0;
do{
    printf("enter a number:");
    scanf("%lf",&number);
    sum+=number;

}
while(number!=0.0);
printf("%2lf",sum);
return 0;
}
int main(){
    forloop();
    whileloop();
    dowhileloop();
}