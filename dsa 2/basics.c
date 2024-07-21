//linked list 
//struct node{
//    struct node*next;
//};
//1gb=2^30 bytes
//1mb=2^20 bytes
//1kb=2^10 bytes
#include<stdio.h>
#include<stdlib.h>
//define the node structure
typedef struct Node{
    int data;
    struct Node*next;
}Node;
Node*createNode(int data)
{
    Node*newNode=(Node*)malloc(sizeof(Node));
    if(!newNode){
        printf("Memory error\n");
        exit(1);
    }
    newNode->next->data=data;
    newNode->next=NULL;
    return newNode;
    }
    void traverseList(Node*head){
        Node*current=head;
        while(current!=NULL){
            printf("%d->",current->data);
            current=current->next;
        }
        printf("NULL");
    }
int main(){
    Node*head=createNode(10);
    head->next=createNode(20);
    head->next->next=createNode(30);
    printf("linked list");
    traverseList(head);
    return 0;
    }

