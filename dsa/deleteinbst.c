#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
// struct Node *createNode(int x)
// {
//     struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
//     temp->data = x;
//     temp->left = NULL;
//     temp->right = NULL;
//     return temp;
// }
struct Node *createNode(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
struct Node *insertElement(struct Node *root, int x)
{
    if (root == NULL)
    {
        struct Node *temp = createNode(x);
        return temp;
    }
    if (root->data >= x)
    {
        root->left = insertElement(root->left, x);
    }
    else
    {
        root->right = insertElement(root->right, x);
    }
    return root;
}

// struct Node *insertElement(struct Node *root, int x)
// {

//     if (root == NULL)
//     { // when the tree is empty
//         struct Node *temp = createNode(x);
//         return temp;
//     }
//     if (root->data >= x)
//     { // value to be inserted is smaller or equal
//         root->left=insertElement(root->left, x);
//     }
//     else
//     { // value to be inserted is larger
//         root->right = insertElement(root->right, x);
//     }
//     return root;
//}
void inorder(struct Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d", root->data);
    inorder(root->right);
    return;
}
int searchinBST(struct Node *root, int x)
{
    if (root == NULL)
    { // element not present
        return 0;
    }
    else if (root->data == x)
    { // element found
        return 1;
    }
    else if (root->data > x)
    { // value is found to be less then the current  node vbalue
        return searchinBST(root->left, x);
    }
    else
    { // value to be dound is greater then ciurrent node
        return searchinBST(root->right, x);
    }
}
struct Node *inorderSuccessor(struct Node *root)
{
    struct Node *ptr = root;
    while (ptr->left != NULL)
    {
        ptr = ptr->left;
    }
    return ptr;
}
struct Node *deleteNode(struct Node *root, int x)
{
    if (root->data > x)
    {
        root->left = deleteNode(root->left, x);
    }
    else if
        (root->data < x)
        {
            root->right = deleteNode(root->right, x);
        }

    else
    {

        if (root->right == NULL && root->left == NULL)
        {
            free(root);
            return NULL;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }
        else if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }
        else
        {
            struct Node *temp = inorderSuccessor(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}
int main()
{
    struct Node *root = NULL;
    root = insertElement(root, 5);
    root = insertElement(root, 10);
    root = insertElement(root, 3);
    root = insertElement(root, 1);
    root = insertElement(root, 6);
    root = insertElement(root, 14);
    root = insertElement(root, 7);
    inorder(root);
    printf("\n");

    int x = searchinBST(root, 7);
    printf("%d\n", x);
    x = searchinBST(root, 5);
    printf("%d\n", x);
    deleteNode(root,3);
    inorder(root);

    return 0;
}