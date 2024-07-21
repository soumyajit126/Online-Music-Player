#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*insertn(struct node*head,int pos,int val)
{
    struct node*ptr=head;
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(pos==1){
        temp->next=head;
        head=temp;
        return head;
    }
    int i;
    for (i=0;i<pos-2;i++){
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    ptr->next=temp;
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
int main(){
    struct node*head=NULL;
    head=insertn(head,1,5);//5
    print(head);
    head=insertn(head,2,7);//7
    print(head);
    head=insertn(head,1,9);//9
    print(head);
    return 0;
}