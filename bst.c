// 1. Write a program in c for  traversing (PreOrder, PostOrder, PreOrder)
// 2. Write a program in c for BST (Binary Search Tree)
#include <stdio.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *left, *right;
};

// There are functions for creating nodes (CreateNode) and 
// traversing the tree in preorder, inorder, and postorder.


// struct node *CreateNode(int data)
// {
//     struct node *newnode;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->left = NULL;
//     newnode->right = NULL;
//     newnode->data = data;
//     return newnode;
// }

// void PreOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         printf("%d", root->data);
//         PreOrder(root->left);
//         PreOrder(root->right);
//     }
// }
// void InOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         InOrder(root->left);
//         printf("%d", root->data);
//         InOrder(root->right);
//     }
// }

// void PostOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         PostOrder(root->left);
//         PostOrder(root->right);
//         printf("%d", root->data);
//     }
// }





// Searching in Binary Search Tree 
// The Search function is designed to find a specific element (searchKey) in the BST. It takes
//  the root of the tree and the key to search for as parameters. 
//  If the root is NULL (indicating an empty tree) or 
// if the search key matches the data of the current node, the function returns the current node. 
struct node *Search(struct node *root, int searchKey)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (searchKey == root->data)
    {
        return root;
    }
    else if (searchKey < root->data)
    {
        return search(root->left, searchKey);
    }
    else
    {
        return search(root->right, searchKey);
    }
}
int main()
{
    struct node *p = CreateNode(1);
    struct node *p1 = CreateNode(2);
    struct node *p2 = CreateNode(3);
    struct node *p3 = CreateNode(4);
    struct node *p4 = CreateNode(5);
    struct node *p5 = CreateNode(6);
    struct node *p6 = CreateNode(7);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
    // printf("This is PreOrder:-\n");
    // PreOrder(p);
    // printf("\nThis is InOrder:-\n");
    // InOrder(p);
    // printf("\nThis is PostOrder:-\n");
    // PostOrder(p);
struct node * n = Search(p, 1);
if (n != NULL)
{
printf("Founded element:- %d", n->data);
}
else
{
    printf("Element is not founded");
}
    return 0;
}