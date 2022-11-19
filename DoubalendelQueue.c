#include <stdio.h>
#define n 5
int a[n];
int front = -1, rear = -1, i;
void display()
{
    i = front;
    printf("\n");
    if (front < 0)
    {

        printf("Array is emty......");
    }
    else
    {
        do
        {
            printf("%d\t", a[i]);
            i = (i + 1) % n;
        } while (i != (rear + 1) % n);
    }
}
void frontinsert(int val)
{
    if (front < 0)
    {
        a[++front] = val;
        ++rear;
    }
    else if (front == 0)
    {
        printf("Data is not enter ");
    }
    else
    {
        a[--front] = val;
    }
}
void reardelete()
{
    if (rear < 0)
    {
        printf("-----Emty-----");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        --rear;
    }
}
void insert(int val)
{
    if ((rear + 1) % n == front)
        printf("------OVERFLOW------");
    else if (front == -1)
    {
        ++front;
        a[++rear] = val;
    }
    else
    {
        rear = (rear + 1) % n;
        a[rear] = val;
    }
}
void delet()
{
    if (front < 0)
        printf("------UNDERFLOW------");
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % n;
    }
}
int main()
{
   /*insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();
    delet();
    delet();
    delet();
    delet();
    delet();
    display();
    frontinsert(60);
    display();
    reardelete();
    display();*/
    int ch, j;
    printf("\n 1. Insert ");
    printf("\n 2. Delete ");
    printf("\n 3. Front Insert ");
    printf("\n 4. Rear Delete ");
    printf("\n 5. Display ");
    printf("\n 0. Exit ");
   
   do{
    printf("\nEnter Your choice : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("first Insert element: ");
        scanf("%d",&j);
        insert (j);
        break;
    case 2:
        delet ();
        break;
    case 3:
        printf(" Front Insert element : ");
        scanf ("%d",&j);
        frontinsert (j);
        break;
    case 4:
        reardelete ();
        break;
    case 5:
        display ();
        break;
    case 0:
        break;
    default:
        printf(" Inviled ");
        break;
    }
   }while(ch!=0);
}
