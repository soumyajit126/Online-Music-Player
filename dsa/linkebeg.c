#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*insertatbeg(struct node*head,int x)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
    temp->data=x;
    if(head==NULL){
        head=temp;
        return head;
    }
    else{
        temp->next=head;
        head=temp;
        return head;
    }
}
void print(struct node*head)
{
    struct node*p=head;
    while(p!=NULL){
        printf("%d",p->data);
        p=p->next;

    }
    printf("\n");
    return;
}
int main()
{
    struct node*head=NULL;
    head = insertatbeg(head,5);
    print(head);
    head = insertatbeg(head,7);
    head = insertatbeg(head,1);
    head = insertatbeg(head,3);
    print(head);
}