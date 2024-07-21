#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    char str[80];
    fp=fopen("data.txt","a");

    printf("Enter your message:");
    gets(str);
    fprintf(fp,"%s",str);
    printf("Append kar diya hai bhai:");
    fclose(fp);
    return 0;
}