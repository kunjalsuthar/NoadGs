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
    while (ptr != NULL)
    {
        printf(" %d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insert (int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    

    if (head == NULL)
    {
        head = temp;
        temp->next = NULL;
    temp->prev = NULL;
        return;
    }
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = temp;
    temp->next = NULL;
    temp->prev = ptr;
    return;

}

void fristinsert(int val)
{
    printf ("Fristinsert : \n");
    struct node *ptr = head;
    
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    

    if (head == NULL)
    {
        head = temp;
        temp->next =NULL; 
        temp->prev = NULL;
    }
    else
    {
        
    temp->next = ptr;
    temp->prev = NULL;   
        head = temp;
    }
}

void deleteEnd()
{
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
        ptr->next->prev = NULL;
        free(ptr);
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    // insert(50);
    // insert(60);
    // insert(70);
    // insert(80);
    print();
    fristinsert (90);
    fristinsert (100);
    print();
     deleteEnd();
    // deleteEnd();
    // deleteEnd();
    // // deleteEnd();
    // deleteEnd();
    // deleteEnd();
    // deleteEnd();
    // deleteEnd();
    //print ();
    fristdelete ();
    fristdelete ();
    fristdelete ();
    fristdelete ();
    print ();
}