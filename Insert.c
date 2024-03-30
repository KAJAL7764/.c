//Search and insert in binary tree...
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *CreateNode(int value)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->data = value;
    return newNode;
}
struct node *insert(struct node *root, int value1)
{
    if (root == NULL)
    {
        return CreateNode(value1);
    }
     if (value1 < root->data)
    {
        root->left = insert(root->left, value1);
    }
    else if (value1 > root->data)
    {
        root->right = insert(root->right, value1);
    }
        return root;
}
struct node *Search(struct node *root, int key)
{
    if (root == NULL || root->data == key)
    {
        return root;
    }
    if (key < root->data)
    {
        return Search(root->left, key);
    }
        return Search(root->right, key);   
}
int main()
{
    struct node *p = NULL;
    p = insert(p, 6);
    insert(p, 5);
    insert(p, 7);
    insert(p, 8);
    insert(p, 9);
    insert(p, 4);
    insert(p, 2);
int keySearch = 8;
struct node *n = Search(p, keySearch);
if (n != NULL)
{
    printf("\nElement %d is found:- %d\n", keySearch, n->data);
}
else
{
    printf("\nElement %d is not found..", keySearch);
}
    return 0;
}