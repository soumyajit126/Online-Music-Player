#include<stdio.h>
#include<stdlib.h>



struct node{
    int data;
    struct node*next;
    
};
int main(){
    struct node* head=NULL;
    struct node*temp=(struct node*)(malloc(sizeof(struct node)));
    temp->data=5;
    //(*temp).data=5
    temp->next =NULL;
    head=temp;
    struct node*temp2=(struct node*)(malloc(sizeof(struct node)));
    temp2->data=7;
    //(*temp2).data=5
    temp2->next =NULL;
    
    return 0;

}