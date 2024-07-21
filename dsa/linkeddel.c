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
struct node*deleteNode(struct node*head,int pos){
    struct node*temp=head;
    if(pos==1)
    {
        head=temp->next;
        free(temp);//for c and c++
        return head;
    }
    int i;
    for(i=0;i<pos-2;i++){
        temp=temp->next;

    }
    struct node*temp2=temp->next;//node to delete
    temp->next=temp2->next;
    free(temp2);
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
    head=deleteNode(head,2);
    print(head);
}