#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createNode(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
struct Node* insertElement(struct Node*root,int x){

    if (root==NULL){//when the tree is empty
        struct Node* temp=createNode(x);
        return temp;

    
    }
    if(root->data>=x){//value to be inserted is smaller or equal
        insertElement(root->left,x);
        
    }
    else{//value to be inserted is larger
        root->right=insertElement(root->right,x)
    }
    return root;
}
void inorder(struct Node* root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d", root->data);
    inorder(root->right);
    return ;
}
int main(){
    struct Node* root=NULL;
    root = insertElement(root,8);
    root = insertElement(root,10);
    root = insertElement(root,3);
    root = insertElement(root,1);
    root = insertElement(root,6);
    root = insertElement(root,14);
    root = insertElement(root,7);



    return 0;
}