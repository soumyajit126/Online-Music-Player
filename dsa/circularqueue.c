#include<stdio.h>
#include<conio.h>
int arr[10];
int size=10;
int front=-1;
int rear=-1;
int isFull()
{
    if(front==(rear+1)%size)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(front==-1){
        return 1;
    
    }
    else{
        return 0;
    }
}
int frontEle(){
    if(isEmpty()){
        printf("queue is empty!!");
        return -1;
    }
    return arr[front];
}
void enqueue (int x){
    if(isFull()){
        printf("queue is full,cannot insert element");
    }
    else{
        if(front==-1)front++;
        rear=(rear+1)%size;
        arr[rear]=x;
    }
}
void dequeue(){
    if (isEmpty())
    {
        printf("Queue is empty");
        return ;
    }
    else{
        if(front==rear){
            front=-1;
            rear-1;
        }
        else{
            front=(front+1)%size;
        }
    }
}
int main(){
    enqueue(5);
    int x=frontEle();
    printf("front element is %d\n",x);
    enqueue(7);
    x=frontEle();
    printf("front element is %d\n",x);
    dequeue();
    x=frontEle();
    printf("front element is %d\n",x);
    dequeue();
    x=frontEle();
    printf("front element is %d\n",x);

    return 0;
}
