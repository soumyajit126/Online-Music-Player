#include<stdio.h>
#include<conio.h>
int size =10;
int arr[10];
int top=-1;
void push(int x){
    if(top==size-1)
    {
        printf("stack is full\n");
        return ;
    }
    else
    {
        top++;
        arr[top]=x;
        return;
    }
}
void pop(){
    if(top==-1){
        printf("stack is empty");
        return;

    }
    top--;
    return ;
}
int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int topElement()
{
    if(top==-1){
        printf("stack is empty.\n");
        return -1;
    }
    return arr[top];

}
int main(){
    push(5);
    push(7);
    int x= topElement();
    printf("%d\n",x);
    pop();
    x=topElement();
    printf("%d\n",x);
    pop();
    x=topElement();
    printf("%d\n",x);
}