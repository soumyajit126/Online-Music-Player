#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* insertatend(struct node*head,int val){
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
        return head;


    }
    struct node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=newNode;
    return head;
}
void print(struct node*head)
{
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;

    }
    printf("\n");
    return;
}
struct node*reversalList(struct node* head){
    struct node *prev ,*curr,*temp;
    prev=NULL;
    curr=head;
    while(curr!=NULL){
    temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;}
    head=prev;
    return head;
}
int main()
{
    struct node*head=NULL;
    head = insertatend(head,5);
    print(head);
    head = insertatend(head,7);
    print(head);
    head = insertatend(head,1);
    print(head);
    head = insertatend(head,3);
    print(head);
    head=reversalList(head);
    print(head);
}
