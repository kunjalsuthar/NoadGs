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
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is Empty.....");
    }
    // ptr = head;
    while (ptr->next != head)
    {
        printf(" %d ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
    printf("\n");
}
void insertfirst(int val)
{
    //printf("InsertEnd : \n");
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }
    while (ptr->next != head)
        ptr = ptr->next;
    ptr->next = temp;
    temp->next = head;
    head = temp;
    return;
}
void insertEnd(int val)
{
    //printf("InsertEnd : \n");
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }
    while (ptr->next != head)
        ptr = ptr->next;
    ptr->next = temp;
    temp->next = head;
    return;
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
    struct node *ptr = head;
    struct node *prev;
    if (head == NULL)
        printf("List is already empty....");

    else if (head->next == ptr)
    {
        head = NULL;
        free(head);
        printf ("Head DeleteEnd : \n");
    
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
    printf ("DeleteEnd : \n");
    }
}

void fristdelete()
{
    printf ("Fristdelete : \n");
    struct node *ptr = head;
    struct node *temp = head;
    if (head==NULL)
    {
        printf ("List is empty ......");
    }
    else if (ptr->next == head)
    {
        head = NULL;
        free(head);
    }
    else
    {
        while (ptr->next!=head)
        {
            ptr=ptr->next;
        }
        
        ptr->next=temp->next;
        head=temp->next;
        free(temp);
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
    insertEnd(60);
    insertEnd(70);
    print();
    // deleteEnd ();
    // deleteEnd ();
    // deleteEnd ();
    // deleteEnd ();
    // print ();
    insertfirst (80);
    print ();
    // fristdelete ();
    // fristdelete ();
    // fristdelete ();
    // fristdelete ();
    // fristdelete ();
    // fristdelete ();
    // fristdelete ();
    // fristdelete ();
    // fristdelete ();
    // print ();
    Midinsert (90,30);
    print ();
    Middelete (30);
    print ();
}