#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void print()
{
    struct node *ptr = NULL;
    if (head == NULL)
    {
        printf("List is Empty.....");
    }
    ptr = head;
    while (ptr->next != head)
    {
        printf(" %d ", ptr->data);
        ptr = ptr->next;
    }
    printf(" %d ", ptr->data);
    printf("\n");
}

void insert(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        temp->prev = head;
        return;
    }
    while (ptr->next != head)
        ptr = ptr->next;
    ptr->next = temp;
    temp->prev = ptr;
    temp->next = head;
    head->prev = temp;
    return;
}

void fristinsert(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        temp->prev = head;
        return;
    }
    while (ptr->next != head)
        ptr = ptr->next;
    ptr->next = temp;
    temp->prev = ptr;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return;
}
void deleteEnd()
{
    struct node *ptr = head;
    struct node *prev;
    if (head == NULL)
        printf("List is already empty....");

    else if (head->next == ptr)
    {
        head = prev;
        free(head);
    }
    else
    {
        while (ptr->next != head)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = head;
        free(ptr);
    }
}

void fristdelete()
{
    printf("Fristdelete : \n");
    struct node *ptr = head;
    struct node *temp = head;
    if (ptr->next == head)
    {
        head = NULL;
        free(head);
    }
    else
    {
        while (ptr->next != head)
            ptr = ptr->next;
        ptr->next = head->next;
        head->next->prev = ptr;
        head = temp->next;
        free(temp);
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    print();
    deleteEnd();
    print();
    fristinsert(60);
    print();
    fristdelete();
    fristdelete();
    fristdelete();
    fristdelete();
    print();
}