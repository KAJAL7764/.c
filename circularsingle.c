// circular single linked list insert at first
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *addToEmpty(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;
}

struct node *InsertAtFirst(struct node *tail, int data)
{
    struct node *NewPtr;
    NewPtr = (struct node *)malloc(sizeof(struct node));
    NewPtr->data = data;
    NewPtr->next = tail->next;
    tail->next = NewPtr;
    return tail;
}
//function for insert at last node
struct node *InsertAtLast(struct node *tail, int data)
{
    struct node *NewPtr;
    NewPtr = (struct node *)malloc(sizeof(struct node));
    NewPtr->data = data;
    NewPtr->next = NULL;
    NewPtr->next =tail->next;
    tail->next = NewPtr;
    tail = tail->next;
    return tail;

}
void print(struct node *tail)
{
    struct node *p = tail->next;
    do
    {
        printf(" %d ", p->data);
        p = p->next;
    } while (p != tail->next);
}
int main()
{
    struct node *tail;
    int data1 = 56;
    int data2 = 67;
    tail = addToEmpty(45);
    tail = InsertAtFirst(tail, 34);
    tail = InsertAtLast(tail, 56);
    tail = InsertAtLast(tail, 78);
    print(tail);
    return 0;
}