#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
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
    while (ptr != NULL)
    {
        printf(" %d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insertEnd(int val)
{
    printf ("InsertEnd : \n");
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = temp;
    return;
}

void fristinsert(int val)
{
    printf ("Fristinsert : \n");
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        temp->next = NULL;
    }
    else
    {
        temp->next = ptr;
        head = temp;
    }
}


void Midinsert(int val, int pos)
{
    printf ("Midinsert : \n");
    struct node *prve;
    struct node *ptr = head;
    //struct node *temp=prve;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    while (ptr->data != pos)
    {
        prve = ptr;
        ptr = ptr->next;
    }
    prve->next = temp;
    //temp->next = prve;
    temp->next=ptr;
}

void deleteEnd()
{
    printf ("DeleteEnd : \n");
    struct node *ptr = head;
    struct node *prev;
    if (head == NULL)
        printf("List is already empty....");

    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        while (ptr->next != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
        free(ptr);
    }
}

void fristdelete()
{
    printf ("Fristdelete : \n");
    struct node *ptr = head;
    struct node *prev;
    if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        head = ptr->next;
        free(ptr);
    }
}

void Middelete(int pos)
{
    printf ("Middelete : \n");
    struct node *prve;
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    while (ptr->data != pos)
    {
        prve = ptr;
        ptr = ptr->next;
    }
    prve->next = ptr->next;
    free(ptr);
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    print();
    deleteEnd();
    print();
    fristinsert(60);
    print();
    fristdelete();
    print();
    Midinsert (70,30);
    print ();
    Middelete (30);
    print();
}